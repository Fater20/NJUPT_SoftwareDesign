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

int source_cnt=0, user_cnt=0, rate_cnt=0;   //记录条数，用户数，费率条数
int query_num;
FEE group[100]; //通话记录组
USER user[10];  //用户组
RATE rate[10], rate_raw[10];    //费率组


MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    ui->label->setText("请导入源数据、用户数据以及费率数据");
    model = new QStandardItemModel; //创建一个标准的条目模型
    ui->table->setModel(model);     //将tableview设置成model这个标准条目模型的模板, model设置的内容都将显示在tableview上
}

MainWindow::~MainWindow()
{
    delete ui;
}

//区号与区号索引的压缩关系
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

//输出费用文件
void write_file()
{
    FILE *fp;
    while((fp=fopen("D:\\Program\\NJUPT_SoftwareDesign\\B2\\B2_exe\\data\\fy.dat","wb"))==NULL)
    {
        cout<<"\tCan't open the file! "<<endl;
        exit(1);
    }
    //fprintf(fp, "%-10s%-10s%-10s\n\r","主叫号码","通话类型","通话费用");
    for(int i=0;i<source_cnt;i++)
    {
        fprintf(fp,"%-10s%-10d%-10g\r\n",group[i].m_pnum,group[i].type,group[i].cost);
    }
    fclose(fp);
}

//table显示"主叫号码","通话类型","通话费用"
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
    //QMessageBox::warning(NULL,"WARNING","ok ",QMessageBox::Cancel);
    //table内各单元显示
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

//计算通话记录内各条的通话类型与费用
void MainWindow::calculate()
{
    int i;
    for(i=0; i<source_cnt; i++) {
        group[i].cost = ((group[i].time-1)/60 +1)* rate[code(group[i].s_dnum)].fee_rate + 0.2*((group[i].time-1)/180) +0.5;

        //判断主叫区号与被叫区号是否一致
        if(!strcmp(group[i].m_dnum,group[i].s_dnum))
            group[i].type='0';  //本地
        else
            group[i].type='1';  //长途
    }
    display();
    write_file();
}


//通过电话号码查询通话记录
void MainWindow::query_record()
{
    model->clear();     //清除table内内容
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
    query_num=0;    //所查询的号码对应用户user组内的索引
    QString query_pnum  = ui->lineEdit->text(); //获得所查询的电话号码
    char*  ch;

    QByteArray ba = query_pnum.toLatin1();  //获取输入的电话号码
    ch=ba.data();

    //判断用户组里是否有此电话号码
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

        //查找匹配的通话记录（分别与主叫和被叫号码比较）
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

//bar menu下"Add user data"按键。选择文件与读入文件数据。
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

        string str = fn.toStdString();

        //检查所选择文件路径中是否包含"yh"
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

    //检查数据是否全部导入
    if(check_data())
    {
        ui->label->clear();
        calculate();
    }
}

//bar menu下"Add source data"按键。选择文件与读入文件数据。
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

        string str = fn.toStdString();

        if (str.find("hd") != string::npos ) //存在
        {
            const char *s= str.c_str();
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

    //检查数据是否全部导入
    if(check_data())
    {
        ui->label->clear();
        calculate();
    }
}

//bar menu下"Add rate data"按键。选择文件与读入文件数据。
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

        string str = fn.toStdString();

        if (str.find("fl") != string::npos ) //存在
        {
            const char *s= str.c_str();
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

            //将原始的费率数据按区号压缩存入新的费率组
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

    //检查数据是否全部导入
    if(check_data())
    {
        ui->label->clear();
        calculate();
    }
}

//通过电话号码查询用户费用
void MainWindow::query_fee()
{
    int i=0;

    query_num=0;
    QString query_pnum  = ui->lineEdit->text();
    char*  ch;
    QByteArray ba = query_pnum.toLatin1();
    ch=ba.data();

    //判断用户组里是否有此电话号码
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

        //新的窗口
        feeQuery_ui=new fee_query;
        feeQuery_ui->show();
    }
}
