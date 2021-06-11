#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

int test(char x,int radix){
    if(radix == 2){
        if(x!='0'&&x!='1')
            return -1;
    }
    else if(radix == 8){
        if(x<'0'||x>'7')
            return -2;
    }
    else if(radix == 10){
        if(x<'0'||x>'9')
            return -3;
    }
    else{
        if((x>='0'&&x<='9')||(x>='a'&&x<='z')||(x>='A'&&x<='Z'))
            return 0;
        else
            return -4;
    }
    return 0;
}

int AtoINT(QString str,int radix)    //radix是进制
{
    int ans=0,i,flag=0;
    for(i=0;i<str.length();i++)
    {
        char t=str[i].toLatin1();
        flag = test(t, radix);
        if(flag<0)
            return flag;
        else{
            if(t>='0'&&t<='9') ans=ans*radix+t-'0';
            else if(t>='a'&&t<='z')ans=ans*radix+t-'a'+10;
            else ans=ans*radix+t-'A'+10;
        }

    }
        return ans;
}

QString INTtoA(int n,int radix)    //n是待转数字，radix是指定的进制
{
    int i;
    QString ans,ans_reverse;
    do{
        int t=n%radix;
        if(t>=0&&t<=9)	ans+=QChar(t+'0');
        else ans+=QChar(t-10+'A');
        n/=radix;
    }while(n!=0);	//使用do{}while（）以防止输入为0的情况
    ans_reverse.resize(ans.length());
    for(i=0; i<ans.length();i++){
        ans_reverse[ans.length()-i-1]=ans[i];
    }
    return ans_reverse;
}

void MainWindow::result_output(int num){
    if(num == -1)
        ui->error_label->setText("请输入正确的二进制");
    else if(num==-2)
        ui->error_label->setText("请输入正确的八进制");
    else if(num==-3)
        ui->error_label->setText("请输入正确的十进制");
    else if(num==-4)
        ui->error_label->setText("请输入正确的十六进制");
    else{
        ui->error_label->clear();
        ui->bin_input->setText(INTtoA(num, 2));
        ui->oct_input->setText(INTtoA(num, 8));
        ui->dec_input->setText(INTtoA(num, 10));
        ui->hex_input->setText(INTtoA(num, 16));
    }
}

void MainWindow::transfer(){
    QString bin_input_content;
    QString oct_input_content;
    QString dec_input_content;
    QString hex_input_content;

    if(ui->bin_radioButton->isChecked()){
        bin_input_content = ui->bin_input->toPlainText();
        result_output(AtoINT(bin_input_content,2));
    }
    else if(ui->oct_radioButton->isChecked()){
        oct_input_content = ui->oct_input->toPlainText();
        result_output(AtoINT(oct_input_content,8));
    }
    else if(ui->dec_radioButton->isChecked()){
        dec_input_content = ui->dec_input->toPlainText();
        result_output(AtoINT(dec_input_content,10));
    }
    else if(ui->hex_radioButton->isChecked()){
        hex_input_content = ui->hex_input->toPlainText();
        result_output(AtoINT(hex_input_content,16));
    }
    else{
        ui->error_label->setText("请选择需要进行转换的进制");
    }

}

