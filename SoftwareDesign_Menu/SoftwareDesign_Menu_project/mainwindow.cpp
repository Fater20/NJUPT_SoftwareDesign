#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "windows.h"

//#include "stdlib.h"
//#include <unistd.h>
//#include "shellapi.h"

//#include <QApplication>
//#include <QCommandLineParser>
//#include <QCommandLineOption>
//#include <QScreen>


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

void MainWindow::jumpA1(){
    WinExec("..\\..\\A1\\A1_exe\\A1.exe",SW_SHOWNORMAL);
}


void MainWindow::jumpA2(){
    WinExec("..\\..\\A2\\A2_exe\\A2.exe",SW_SHOWNORMAL);
}

void MainWindow::jumpA3(){
    WinExec("..\\..\\A3\\A3_exe\\textedit.exe",SW_SHOWNORMAL);
}

void MainWindow::jumpA4(){
    WinExec("..\\..\\A4\\A4_exe\\A4.exe",SW_SHOWNORMAL);
}

void MainWindow::jumpA5(){
    WinExec("..\\..\\A5\\A5_exe\\A5.exe",SW_SHOWNORMAL);
}

void MainWindow::jumpB1(){
    WinExec("..\\..\\B1\\B1_exe\\B1.exe",SW_SHOWNORMAL);

}

void MainWindow::jumpB2(){
    WinExec("..\\..\\B2\\B2_exe\\B2.exe", SW_SHOWNORMAL);
}


