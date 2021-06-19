#include "ratinga.h"
#include "ui_ratinga.h"
#include "mainwindow.h"

using namespace std;

extern student students[40];

void getData_2();
void scoreSequence_2();   //冒泡法排序
void score2rating_2();    //将综评成绩转化为等级
void getPassrate_2();
extern float ave;
extern int stu_num;
float a_rate;
int a_num = 0;
student student_a[40];

void getPassrate_2(){
    for(int i = 0; i < stu_num; i++){
        if(students[i].overallScore >= 90){
            student_a[a_num] = students[i];
            a_num++;
        }
    }
    a_rate = ((float)a_num / (float)stu_num) * 100;

}

// 冒泡法对所有学生成绩进行排序
void scoreSequence_2(){
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

void score2rating_2(){
    int i;
    for(i = 0; i < stu_num; i++){
        if(students[i].overallScore >= 90) students[i].Rating ='A';
        else if(students[i].overallScore >= 80) students[i].Rating ='B';
        else if(students[i].overallScore >= 70) students[i].Rating ='C';
        else if(students[i].overallScore >= 60) students[i].Rating ='D';
        else students[i].Rating ='E';
    }
}

void getData_2(){
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
    scoreSequence_2();
    score2rating_2();
    getPassrate_2();
}


ratinga::ratinga(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::ratinga)
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

    getData_2();

    ui->scoreTable->setRowCount(a_num);
    for(int i = 0; i < a_num; i++)
    {
        QString normalScore = QString("%1").arg(student_a[i].normalScore);
        QString halfScore = QString("%1").arg(student_a[i].halfexamScore);
        QString finalScore = QString("%1").arg(student_a[i].finalexamScore);
        QString overallScore = QString("%1").arg(student_a[i].overallScore);
        QString stuID = QString(QLatin1String(student_a[i].stu_num));
        QString rating = QString(student_a[i].Rating);

        ui->scoreTable->setItem(i,0,new QTableWidgetItem(stuID));
        ui->scoreTable->setItem(i,1,new QTableWidgetItem(normalScore));
        ui->scoreTable->setItem(i,2,new QTableWidgetItem(halfScore));
        ui->scoreTable->setItem(i,3,new QTableWidgetItem(finalScore));
        ui->scoreTable->setItem(i,4,new QTableWidgetItem(overallScore));
        ui->scoreTable->setItem(i,5,new QTableWidgetItem(rating));

    }

    QString anum = QString("%1").arg(a_num);
    QString arate = QString("%1%").arg(a_rate);


    ui->a_number->setText(anum);
    ui->a_rate->setText(arate);
}

ratinga::~ratinga()
{
    delete ui;
}
