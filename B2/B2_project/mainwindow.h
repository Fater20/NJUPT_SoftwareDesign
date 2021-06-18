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
    char m_dnum[5];
    char m_pnum[10];
    char s_dnum[5];
    char s_pnum[10];
    int time;
};
class FEE:public SOURCE
{
public:
    char type;
    float cost;
};

class USER
{
public:
    char name[10];
    char pnum[10];
};

class RATE
{
public:
    char dnum[5];
    float fee_rate;
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
