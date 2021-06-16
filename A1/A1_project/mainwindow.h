#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "sort_dialog.h"
#include <QRegularExpressionValidator>
#include <QMessageBox>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_pushButton_next_clicked();

    void on_pushButton_sort_clicked();

    void on_pushButton_reset_clicked();

private:
    Ui::MainWindow *ui;
    sort_dialog *sort_dia;
};
#endif // MAINWINDOW_H
