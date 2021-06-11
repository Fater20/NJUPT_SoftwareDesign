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

//检查输入是否符合要求
//x是待检查的字符（char）；radix是进制（2，8，10，16）
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

//文本转int
//str是待转换的文本；radix是进制（2，8，10，16）
int AtoINT(QString str,int radix)
{
    int ans=0,i,flag=0;
    for(i=0;i<str.length();i++)
    {
        char t=str[i].toLatin1();   //QChar转换为char
        flag = test(t, radix);  //检查字符是否符合要求
        if(flag<0)  
            return flag;    //字符不符合要求直接退出，返回错误号
        else{
            //根据进制进行转换
            if(t>='0'&&t<='9') ans=ans*radix+t-'0';
            else if(t>='a'&&t<='z')ans=ans*radix+t-'a'+10;
            else ans=ans*radix+t-'A'+10;
        }

    }
        return ans; //返回转换后数字
}

//int转各进制文本
//n是待转换的数字；radix是进制（2，8，10，16）
QString INTtoA(int n,int radix)
{
    int i;
    QString ans,ans_reverse;
    do{
        int t=n%radix;
        if(t>=0&&t<=9)	ans+=QChar(t+'0');
        else ans+=QChar(t-10+'A');
        n/=radix;
    }while(n!=0);	//使用do{}while()以防止输入为0的情况
    //根据ans的大小为ans_reverse分配空间
    ans_reverse.resize(ans.length());
    //对ans进行翻转
    for(i=0; i<ans.length();i++){
        ans_reverse[ans.length()-i-1]=ans[i];
    }
    return ans_reverse;
}

//转换后结果输出，或输出错误原因
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

    //判断输入数据的进制
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

