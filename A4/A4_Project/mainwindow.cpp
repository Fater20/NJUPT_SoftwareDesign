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

void MainWindow::MtoC(){
    QString M_content = ui->M_text->toPlainText(); //获取M_text的内容

    QString K_content = ui->K_text->toPlainText(); //获取K_text的内容

    QString C_content;  //密文C内容
    C_content.resize(M_content.length());   //分配C_content的空间
    char M_content_char;    //M_content（字符型）
    int K_value;    //密钥值

    int i;
    K_value = K_content.toInt();    //K值 QString转int
    for(i=0;i<M_content.length();i++){
        M_content_char = M_content[i].toLatin1();   //M值 QChar转char
        C_content[i] = QChar(M_content_char + K_value); //加密 char转QChar

        //判断密文是否超范围
        if((C_content[i]>='a'&&C_content[i]<='z')||(C_content[i]>='A'&&C_content[i]<='Z'))
            continue;
        else
        {
            C_content = "请输入有效明文和密钥。\n";
            break;
        }
    }

    //  将C_content输出到C_text
     ui->C_text->setText(C_content);
}

void MainWindow::CtoM(){
    QString C_content = ui->C_text->toPlainText(); //获取C_text的内容

    QString K_content = ui->K_text->toPlainText(); //获取K_text的内容

    QString M_content;  //明文M内容
    M_content.resize(C_content.length());   //分配M_content的空间
    char C_content_char;    //C_content（字符型）
    int K_value;    //密钥值

    int i;
    K_value = K_content.toInt();    //K值 QString转int
    for(i=0;i<C_content.length();i++){
        C_content_char = C_content[i].toLatin1();   //C值 QChar转char
        M_content[i] = QChar(C_content_char - K_value); //解密 char转QChar

        //判断明文是否超范围
        if((M_content[i]>='a'&&M_content[i]<='z')||(M_content[i]>='A'&&M_content[i]<='Z'))
            continue;
        else
        {
            M_content = "请输入有效密文和密钥。\n";
            break;
        }
    }

    //  将M_content输出到M_text
     ui->M_text->setText(M_content);
}
