#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <stdlib.h>

//#include <QFileDialog>

#include <QFile>
#include <QFileDialog>
#include <QFileInfo>
#include <string>


#include<iostream>      //包含输入输出流对象的头文件

using namespace std;

int source_cnt=0, user_cnt=0, rate_cnt=0;
int query_num;
FEE group[100];
USER user[10];
RATE rate[10], rate_raw[10];


MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    ui->label->setText("请导入源数据、用户数据以及费率数据");
    model = new QStandardItemModel;   //创建一个标准的条目模型
    ui->table->setModel(model);   //将tableview设置成model这个标准条目模型的模板, model设置的内容都将显示在tableview上
}

MainWindow::~MainWindow()
{
    delete ui;
}

int code(char *p)
{
    int num, mark=0;
    num = atoi(p);
    for(int i=0; num!=0; i++)
    {
        mark+=num%10;
        num/=10;
    }
    if(mark>10)
    {
        mark-=9;
    }
    return mark;
}

void write_file()
{
    FILE *fp;
    while((fp=fopen(".\\data\\fy.dat","wb"))==NULL)
    {
        cout<<"\tCan't open the file! "<<endl;
        exit(1);
    }
    //fprintf(fp, "%-10s%-10s%-10s\n\r","主叫号码","通话类型","通话费用");
    for(int i=0;i<source_cnt;i++)
    {	//cout<<"\t----------------------------------------------------------"<<endl;
        fprintf(fp,"%-10s%-10d%-10g\r\n",group[i].m_pnum,group[i].type,group[i].cost);
    }
    fclose(fp);
}
void MainWindow::display()
{

    model->clear();
    model->setHorizontalHeaderItem(0, new QStandardItem("主叫电话号码"));
    model->setHorizontalHeaderItem(1, new QStandardItem("通话类型"));
    model->setHorizontalHeaderItem(2, new QStandardItem("话费金额"));

    ui->table->setColumnWidth(0, 100);    //设置列的宽度
    ui->table->setColumnWidth(1, 100);
    ui->table->setColumnWidth(2, 100);

    int i;
    //model->setRowCount(source_cnt);
    for(i = 0; i < source_cnt; i++)
    {
        model->setItem(i,0,new QStandardItem(QString("%1").arg(group[i].m_pnum)));
        if(group[i].type=='0')
            model->setItem(i,1,new QStandardItem("本地"));
        else
            model->setItem(i,1,new QStandardItem("长途"));
        model->setItem(i,2,new QStandardItem(QString("%1").arg(group[i].cost)));
    }
}

void MainWindow::calculate()
{
    int i;
    for(i=0; i<source_cnt; i++) {
        group[i].cost = ((group[i].time-1)/60 +1)* rate[code(group[i].s_dnum)].fee_rate + 0.2*((group[i].time-1)/180) +0.5;

        if(!strcmp(group[i].m_dnum,group[i].s_dnum))
            group[i].type='0';
        else
            group[i].type='1';
    }
    display();
    write_file();
}

void MainWindow::query_record()
{
    model->clear();
    model->setHorizontalHeaderItem(0, new QStandardItem("用户名"));
    model->setHorizontalHeaderItem(1, new QStandardItem("主叫号码"));
    model->setHorizontalHeaderItem(2, new QStandardItem("被叫号码"));
    model->setHorizontalHeaderItem(3, new QStandardItem("通话时长"));

    ui->table->setColumnWidth(0, 50);    //设置列的宽度
    ui->table->setColumnWidth(1, 80);
    ui->table->setColumnWidth(2, 80);
    ui->table->setColumnWidth(3, 100);

    int i=0;
    char flag=0;
    query_num=0;
    QString query_pnum  = ui->lineEdit->text();
    char*  ch;
    QByteArray ba = query_pnum.toLatin1(); // must
    ch=ba.data();
    while(strcmp(ch,user[i++].pnum))
    {
        if(i>=user_cnt)
        {
            i=0;
            break;
        }
    }

    if(i==0)
    {
        QMessageBox::warning(NULL,"ERROR","No user! ",QMessageBox::Cancel);
    }
    else
    {
        query_num = i-1;
        for(i = 0; i < source_cnt; i++)
        {
            if( !(strcmp(group[i].m_pnum,user[query_num].pnum)&&strcmp(group[i].s_pnum,user[query_num].pnum)) )
            {
                flag++;
                model->setItem(flag-1,0,new QStandardItem(QString(user[query_num].name)));
                model->setItem(flag-1,1,new QStandardItem(QString("%1").arg(group[i].m_pnum)));
                model->setItem(flag-1,2,new QStandardItem(QString("%1").arg(group[i].s_pnum)));
                model->setItem(flag-1,3,new QStandardItem(QString("%1").arg(group[i].time)));
            }
        }
        if(flag==0)
            QMessageBox::warning(NULL,"WARNING","No record! ",QMessageBox::Cancel);
    }
}

//检查数据是否全部导入
char MainWindow::check_data()
{
    if(source_cnt==0&&rate_cnt==0&&user_cnt==0)
        ui->label->setText("请导入源数据、用户数据以及费率数据");
    else if(source_cnt==0&&rate_cnt!=0&&user_cnt==0)
        ui->label->setText("请导入源数据以及用户数据");
    else if(source_cnt==0&&rate_cnt==0&&user_cnt!=0)
        ui->label->setText("请导入源数据以及费率数据");
    else if(source_cnt!=0&&rate_cnt==0&&user_cnt==0)
        ui->label->setText("请导入用户数据以及费率数据");
    else if(source_cnt==0&&rate_cnt!=0&&user_cnt!=0)
        ui->label->setText("请导入源数据");
    else if(source_cnt!=0&&rate_cnt!=0&&user_cnt==0)
        ui->label->setText("请导入用户数据");
    else if(source_cnt!=0&&rate_cnt==0&&user_cnt!=0)
        ui->label->setText("请导入费率数据");
    else
    {
        return 1;
    }
    return 0;
}

void MainWindow::on_actionAdd_user_triggered()
{
    int i=0;
    FILE *fp;
    //定义文件对话框类
    QFileDialog *fileDialog = new QFileDialog(this);
    //定义文件对话框标题
    fileDialog->setWindowTitle(tr("Add user data"));
    //设置默认文件路径
    fileDialog->setDirectory(".");
    //设置文件过滤器
    fileDialog->setNameFilter(tr("Data(*.dat)"));
    //设置可以选择多个文件,默认为只能选择一个文件QFileDialog::ExistingFiles
    fileDialog->setFileMode(QFileDialog::ExistingFiles);
    //设置视图模式
    fileDialog->setViewMode(QFileDialog::Detail);
    //
    if (fileDialog->exec())
    {
        QString fn = fileDialog->selectedFiles().first();
        //user_filepath = fn;
        //ui->label->setText(user_filepath);
        string str = fn.toStdString();

        if (str.find("yh") != string::npos ) //存在。
        {
            const char *s= str.c_str();
            if((fp = fopen(s,"rb"))==NULL)
            {
                cout<<"Can't open the file! "<<endl;
                exit(1);
            }
            //while((ch=fgetc(fp1))!='\n');
            fscanf(fp,"%s%s",user[i].pnum,user[i].name);
            while(!feof(fp))
            {
                i=i+1;
                fscanf(fp,"%s%s",user[i].pnum,user[i].name);
            }
            user_cnt = i+1;
            fclose(fp);
            //ui->label->setText(user[0].name);
        }
        else
            QMessageBox::warning(NULL,"WARNING","Not user data file! ",QMessageBox::Cancel);
    }
    if(check_data())
    {
        ui->label->clear();
        calculate();
    }
}


void MainWindow::on_actionAdd_source_triggered()
{
    int i=0;
    FILE *fp;
    //定义文件对话框类
    QFileDialog *fileDialog = new QFileDialog(this);
    //定义文件对话框标题
    fileDialog->setWindowTitle(tr("Add source data"));
    //设置默认文件路径
    fileDialog->setDirectory(".");
    //设置文件过滤器
    fileDialog->setNameFilter(tr("Data(*.dat)"));
    //设置可以选择多个文件,默认为只能选择一个文件QFileDialog::ExistingFiles
    fileDialog->setFileMode(QFileDialog::ExistingFiles);
    //设置视图模式
    fileDialog->setViewMode(QFileDialog::Detail);
    //
    if (fileDialog->exec())
    {
        QString fn = fileDialog->selectedFiles().first();
        //user_filepath = fn;
        //ui->label->setText(user_filepath);
        string str = fn.toStdString();
        const char *s= str.c_str();
        if (str.find("hd") != string::npos ) //存在
        {
            if((fp = fopen(s,"rb"))==NULL)
            {
                cout<<"Can't open the file! "<<endl;
                exit(1);
            }
            //while((ch=fgetc(fp1))!='\n');
            fscanf(fp,"%s%s%s%s%d",group[i].m_dnum,group[i].m_pnum,group[i].s_dnum,group[i].s_pnum,&group[i].time);
            while(!feof(fp))
            {
                i=i+1;
                fscanf(fp,"%s%s%s%s%d",group[i].m_dnum,group[i].m_pnum,group[i].s_dnum,group[i].s_pnum,&group[i].time);
            }
            source_cnt = i+1;
            fclose(fp);
            //ui->label->setText(group[0].s_pnum);
        }
        else
            QMessageBox::warning(NULL,"WARNING","Not source data file! ",QMessageBox::Cancel);
    }
    if(check_data())
    {
        ui->label->clear();
        calculate();
    }
}


void MainWindow::on_actionAdd_rate_triggered()
{
    int i=0;
    FILE *fp;
    //定义文件对话框类
    QFileDialog *fileDialog = new QFileDialog(this);
    //定义文件对话框标题
    fileDialog->setWindowTitle(tr("Add rate data"));
    //设置默认文件路径
    fileDialog->setDirectory(".");
    //设置文件过滤器
    fileDialog->setNameFilter(tr("Data(*.dat)"));
    //设置可以选择多个文件,默认为只能选择一个文件QFileDialog::ExistingFiles
    fileDialog->setFileMode(QFileDialog::ExistingFiles);
    //设置视图模式
    fileDialog->setViewMode(QFileDialog::Detail);
    //
    if (fileDialog->exec())
    {
        QString fn = fileDialog->selectedFiles().first();
        //user_filepath = fn;
        //ui->label->setText(user_filepath);
        string str = fn.toStdString();
        const char *s= str.c_str();
        if (str.find("fl") != string::npos ) //存在
        {
            if((fp = fopen(s,"rb"))==NULL)
            {
                cout<<"Can't open the file! "<<endl;
                exit(1);
            }
            //while((ch=fgetc(fp1))!='\n');
            fscanf(fp,"%s%f",rate_raw[i].dnum, &rate_raw[i].fee_rate);
            while(!feof(fp))
            {
                i=i+1;
                fscanf(fp,"%s%f",rate_raw[i].dnum, &rate_raw[i].fee_rate);
            }
            rate_cnt = i+1;
            rate[7].fee_rate = 0;
            rate[7].dnum[0] = '0';
            rate[7].dnum[1] = '2';
            rate[7].dnum[2] = '5';

            for (i=0; i<rate_cnt; i++) {
                rate[code(rate_raw[i].dnum)].fee_rate = rate_raw[i].fee_rate;
                for(int j=0; j<5; j++)
                {
                    rate[code(rate_raw[i].dnum)].dnum[j] = rate_raw[i].dnum[j];
                }
            }
            fclose(fp);
            //ui->label->setText(rate[0].dnum);
        }
        else
            QMessageBox::warning(NULL,"WARNING","Not rate data file! ",QMessageBox::Cancel);
    }
    if(check_data())
    {
        ui->label->clear();
        calculate();
    }
}

void MainWindow::query_fee()
{
    int i=0;
    //char flag=0;
    query_num=0;
    QString query_pnum  = ui->lineEdit->text();
    char*  ch;
    QByteArray ba = query_pnum.toLatin1(); // must
    ch=ba.data();
    while(strcmp(ch,user[i++].pnum))
    {
        if(i>=user_cnt)
        {
            i=0;
            break;
        }
    }

    if(i==0)
    {
        QMessageBox::warning(NULL,"ERROR","No user! ",QMessageBox::Cancel);
    }
    else
    {
        query_num = i-1;

        feeQuery_ui=new fee_query;
        feeQuery_ui->show();
    }
}
