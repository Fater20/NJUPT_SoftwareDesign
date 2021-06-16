#include "mainwindow.h"
#include "ui_mainwindow.h"

int input_num=0;

struct student
{
     int ID;
     QString name;    //学生姓名
     float score;     //学生成绩
}stu[100];

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    QRegularExpression regx("[0-9]+$");
        QValidator *validator = new QRegularExpressionValidator(regx,this );
        ui->lineEdit_score->setValidator( validator );
    ui->lineEdit_num->setText(QString::number(input_num));
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_pushButton_next_clicked()
{
    QString input_name = ui->lineEdit_name->text();
    QString input_score = ui->lineEdit_score->text();
    if ( input_name.isEmpty()||input_score.isEmpty())
    {
        QMessageBox::warning(NULL,"ERROR","输入不能为空",QMessageBox::Cancel);
    }
    else
    {
        stu[input_num].ID=input_num;
        stu[input_num].name=ui->lineEdit_name->text();
        QString score_str=ui->lineEdit_score->text();
        stu[input_num].score=score_str.toFloat();

        input_num++;
        ui->lineEdit_num->setText(QString::number(input_num));
        ui->lineEdit_name->clear();
        ui->lineEdit_score->clear();
    }
}


void MainWindow::on_pushButton_sort_clicked()
{
    if(input_num==0)
    {
        QMessageBox::warning(NULL,"ERROR","未录入成绩",QMessageBox::Cancel);
    }
    else
    {
        sort_dia=new sort_dialog;
        sort_dia->show();
    }
}


void MainWindow::on_pushButton_reset_clicked()
{
    input_num=0;
    ui->lineEdit_num->setText(QString::number(input_num));
    ui->lineEdit_name->clear();
    ui->lineEdit_score->clear();
}

