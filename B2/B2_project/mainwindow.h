#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

#include <QStandardItemModel>
#include <QDialog>

#include <QMessageBox>

#include "fee_query.h"

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class SOURCE
{
public:
    char m_dnum[5]; //主叫区号
    char m_pnum[10];//主叫号码
    char s_dnum[5]; //被叫区号
    char s_pnum[10];//被叫号码
    int time;       //通话时长
};
class FEE:public SOURCE
{
public:
    char type;  //本地'0',长途'1'
    float cost; //费用
};

class USER
{
public:
    char name[10];  //用户名
    char pnum[10];  //电话号码
};

class RATE
{
public:
    char dnum[5];   //区号
    float fee_rate; //费率
};

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();
    void display();
    void calculate();
    char check_data();

private slots:
    void on_actionAdd_user_triggered();

    void on_actionAdd_source_triggered();

    void on_actionAdd_rate_triggered();

    void query_record();

    void query_fee();

private:
    Ui::MainWindow *ui;
    fee_query *feeQuery_ui;
    QStandardItemModel *model;
};




#endif // MAINWINDOW_H
