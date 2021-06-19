#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <iostream>
#include <fstream>
#include <string>
#include <QApplication>
#include <stdio.h>
#include "scoredlg.h"
#include "ratingb.h"
#include "ratinga.h"
#include "ratingc.h"
#include "ratingd.h"
#include "ratinge.h"

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

//struct student{
//    char stu_num[10];
//    float normalScore;
//    float halfexamScore;
//    float finalexamScore;
//    float overallScore;
//    char Rating;
//}students[40];

struct student{
    char stu_num[10];
    float normalScore;
    float halfexamScore;
    float finalexamScore;
    float overallScore;
    char Rating;
};

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

public slots:
    void readScore();
    void showAll();
    void showA();
    void showB();
    void showC();
    void showD();
    void showE();

private:
    Ui::MainWindow *ui;
//    showAll showAll;
    scoreDlg dialog;
//    rateShow arate;
    ratingb brate;
    ratinga arate;
    ratingc crate;
    ratingd drate;
    ratinge erate;
};
#endif // MAINWINDOW_H
