#include "mainwindow.h"
#include "ui_mainwindow.h"

#include <fstream>
#include <iostream>

using namespace std;

FILE *fp1;              //定义外部文件变量
int i=0;                  //文件中存储数据数量
float ave;              //定义平均分
int stu_num;
float maxScore;
float minScore;

// 优良中差不及格百分比
float percentA;
float percentB;
float percentC;
float percentD;
float percentE;

void scoreSequence();   //冒泡法排序
void score2rating();    //将综评成绩转化为等级

student students[40];

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

// 冒泡法对所有学生成绩进行排序
void scoreSequence(){
    student temp;
    for(int i = stu_num-1; i>0; i--){
        for(int j = 0; j<i; j++){
            if(students[j].overallScore > students[j+1].overallScore){
                temp = students[j];
                students[j] = students[j+1];
                students[j+1] = temp;
            }
        }
    }
    maxScore = students[stu_num-1].overallScore;
    minScore = students[0].overallScore;
}

void score2rating(){
    for(i = 0; i < stu_num; i++){
        if(students[i].overallScore >= 90) students[i].Rating ='A';
        else if(students[i].overallScore >= 80) students[i].Rating ='B';
        else if(students[i].overallScore >= 70) students[i].Rating ='C';
        else if(students[i].overallScore >= 60) students[i].Rating ='D';
        else students[i].Rating ='E';
    }
}

void MainWindow::readScore(){
//    char ch;
    int m;
    float sum=0;
    memset (students,0,sizeof(students));
    if((fp1=fopen("D:\\Program\\NJUPT_SoftwareDesign\\B1\\B1_project\\data\\note.dat","rb"))==NULL)
    {
        cout<<"\tCan't open the file! "<<endl;
        exit(1);
    }
    fscanf(fp1,"%s%f%f%f",students[i].stu_num,&students[i].normalScore,&students[i].halfexamScore,&students[i].finalexamScore);
    while(!feof(fp1))
    {
        i=i+1;
        fscanf(fp1,"%s%f%f%f",students[i].stu_num,&students[i].normalScore,&students[i].halfexamScore,&students[i].finalexamScore);
    }
    for(m=0;m<i;m++)
    {
        students[m].overallScore=(students[m].normalScore)*0.3+(students[m].halfexamScore)*0.3+(students[m].finalexamScore)*0.4;
        sum=sum+students[m].overallScore;
    }
    ave=sum/i;
    stu_num = i;
    fclose(fp1);
    scoreSequence();
    score2rating();
    QString average_score_Str = QString("%1").arg(ave);
    QString min_score_Str = QString("%1").arg(minScore);
    QString max_score_Str = QString("%1").arg(maxScore);
    QString stu_num_Str = QString("%1").arg(stu_num);
    ui->averageScore->setText(average_score_Str);          //输出平均分
    ui->minScore->setText(min_score_Str);                  //输出最低分
    ui->maxScore->setText(max_score_Str);                  //输出最高分
    ui->stuNum->setText(stu_num_Str);                      //输出最高分

    i = 0;
}

void MainWindow::showAll(){
    this->hide();
    dialog.show();
    dialog.exec();
    this->show();
}

void MainWindow::showA(){

    this->hide();
    arate.show();
    arate.exec();
    this->show();
}

void MainWindow::showB(){
    this->hide();
    brate.show();
    brate.exec();
    this->show();

}

void MainWindow::showC(){
    this->hide();
    crate.show();
    crate.exec();
    this->show();
}

void MainWindow::showD(){
    this->hide();
    drate.show();
    drate.exec();
    this->show();

}

void MainWindow::showE(){
    this->hide();
    erate.show();
    erate.exec();
    this->show();
}
