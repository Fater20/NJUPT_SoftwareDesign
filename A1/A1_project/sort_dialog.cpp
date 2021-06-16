#include "sort_dialog.h"
#include "ui_sort_dialog.h"

extern int input_num;
extern struct student
{
    int ID;
    QString name;    //学生姓名
    float score;     //学生成绩
}stu[];

sort_dialog::sort_dialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::sort_dialog)
{
    ui->setupUi(this);

    for(int i=0;i<input_num;i++)
    {
        int max_index=i;
        struct student stu_temp;
        for(int j=i+1;j<input_num;j++)
            if(stu[j].score>stu[max_index].score)
                max_index=j;
        if(max_index!=i)
        {
            stu_temp=stu[i];
            stu[i]=stu[max_index];
            stu[max_index]=stu_temp;
        }
    }
    this->model = new QStandardItemModel;   //创建一个标准的条目模型
    this->ui->tableView->setModel(model);   //将tableview设置成model这个标准条目模型的模板, model设置的内容都将显示在tableview上

    this->model->setHorizontalHeaderItem(0, new QStandardItem("姓名"));
    this->model->setHorizontalHeaderItem(1, new QStandardItem("成绩"));

    this->ui->tableView->setColumnWidth(0, 100);    //设置列的宽度
    this->ui->tableView->setColumnWidth(1, 100);

    model->setRowCount(input_num);
    for(int i = 0; i < input_num; i++)
    {
        model->setItem(i,0,new QStandardItem(stu[i].name));
        model->setItem(i,1,new QStandardItem(QString::number(stu[i].score)));
    }
}

sort_dialog::~sort_dialog()
{
    delete ui;
}
