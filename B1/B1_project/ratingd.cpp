#include "ratingd.h"
#include "ui_ratingd.h"
#include "mainwindow.h"

using namespace std;

extern student students[40];

void getData_5();
void scoreSequence_5();   //冒泡法排序
void score2rating_5();    //将综评成绩转化为等级
void getPassrate_5();
extern float ave;
extern int stu_num;
float d_rate;
int d_num = 0;
student student_d[40];

void getPassrate_5(){
    for(int i = 0; i < stu_num; i++){
        if(students[i].overallScore >= 60 && students[i].overallScore < 70){
            student_d[d_num] = students[i];
            d_num++;
        }
    }
    d_rate = ((float)d_num / (float)stu_num) * 100;

}

// 冒泡法对所有学生成绩进行排序
void scoreSequence_5(){
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
}

void score2rating_5(){
    int i;
    for(i = 0; i < stu_num; i++){
        if(students[i].overallScore >= 90) students[i].Rating ='A';
        else if(students[i].overallScore >= 80) students[i].Rating ='B';
        else if(students[i].overallScore >= 70) students[i].Rating ='C';
        else if(students[i].overallScore >= 60) students[i].Rating ='D';
        else students[i].Rating ='E';
    }
}

void getData_5(){
    int m;
    float sum=0;
    FILE *fp1;
    int i=0;
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
    scoreSequence_5();
    score2rating_5();
    getPassrate_5();
}

ratingd::ratingd(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::ratingd)
{
    ui->setupUi(this);
    ui->scoreTable->setHorizontalHeaderItem(0,new QTableWidgetItem("学号"));
    ui->scoreTable->setHorizontalHeaderItem(1,new QTableWidgetItem("平时成绩"));
    ui->scoreTable->setHorizontalHeaderItem(2,new QTableWidgetItem("半期成绩"));
    ui->scoreTable->setHorizontalHeaderItem(3,new QTableWidgetItem("期末成绩"));
    ui->scoreTable->setHorizontalHeaderItem(4,new QTableWidgetItem("综评成绩"));
    ui->scoreTable->setHorizontalHeaderItem(5,new QTableWidgetItem("评分等级"));

    ui->scoreTable->setColumnWidth(0, 80);    //设置列的宽度
    ui->scoreTable->setColumnWidth(1, 65);
    ui->scoreTable->setColumnWidth(2, 65);
    ui->scoreTable->setColumnWidth(3, 65);
    ui->scoreTable->setColumnWidth(4, 65);
    ui->scoreTable->setColumnWidth(5, 65);

    getData_5();

    ui->scoreTable->setRowCount(d_num);
    for(int i = 0; i < d_num; i++)
    {
        QString normalScore = QString("%1").arg(student_d[i].normalScore);
        QString halfScore = QString("%1").arg(student_d[i].halfexamScore);
        QString finalScore = QString("%1").arg(student_d[i].finalexamScore);
        QString overallScore = QString("%1").arg(student_d[i].overallScore);
        QString stuID = QString(QLatin1String(student_d[i].stu_num));
        QString rating = QString(student_d[i].Rating);

        ui->scoreTable->setItem(i,0,new QTableWidgetItem(stuID));
        ui->scoreTable->setItem(i,1,new QTableWidgetItem(normalScore));
        ui->scoreTable->setItem(i,2,new QTableWidgetItem(halfScore));
        ui->scoreTable->setItem(i,3,new QTableWidgetItem(finalScore));
        ui->scoreTable->setItem(i,4,new QTableWidgetItem(overallScore));
        ui->scoreTable->setItem(i,5,new QTableWidgetItem(rating));

    }

    QString dnum = QString("%1").arg(d_num);
    QString drate = QString("%1%").arg(d_rate);


    ui->d_number->setText(dnum);
    ui->d_rate->setText(drate);
}

ratingd::~ratingd()
{
    delete ui;
}
