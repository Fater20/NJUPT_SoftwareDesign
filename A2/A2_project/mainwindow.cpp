#include "mainwindow.h"
#include "ui_mainwindow.h"

#include <stdlib.h>
#include <time.h>

QString str;


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

void MainWindow::generate_text(){
    int i,len;
    srand(time(NULL));
    len = rand()%10+2;
    str.resize(len);
    for (i = 0; i < len; ++i)
    {
        switch ((rand() % 3))
        {
        case 1:
            str[i] = QChar('A' + rand() % 26);
            break;
        case 2:
            str[i] = QChar('a' + rand() % 26);
            break;
        default:
            str[i] = QChar('0' + rand() % 10);
            break;
        }
    }
    //str[i] = '\0';
    ui->text_output->setText(str);
}

void MainWindow::examine_text(){
    QString text_input_content = ui->text_input->toPlainText(); //获取text_input的内容
    QString text_output_content = ui->text_output->toPlainText(); //获取text_output的内容
    int i, right=0, accuracy_percentage;
    QString accuracy_percentage_text;
    accuracy_percentage_text.resize(5);
    for (i=0; i<text_input_content.length() && i<text_output_content.length(); i++) {
        if(text_input_content[i]==text_output_content[i])
            right++;
    }
    if(text_output_content.length()>=text_input_content.length())
        accuracy_percentage = right*100/text_output_content.length();
    else
        accuracy_percentage = right*100/text_input_content.length();
    str = QString("%1 %").arg(accuracy_percentage);
    ui->Accuracy_num->setText(str);
    //accurancy_percentage_text.sprintf("%d%%",accurancy_percentage);
}
