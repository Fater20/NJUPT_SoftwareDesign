/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.1.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QLabel *label;
    QTextBrowser *text_output;
    QLabel *label_2;
    QTextEdit *text_input;
    QPushButton *generate_Button;
    QPushButton *examine_Button;
    QLabel *label_3;
    QLabel *Accuracy_num;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(400, 400);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        label = new QLabel(centralwidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(20, 20, 72, 15));
        text_output = new QTextBrowser(centralwidget);
        text_output->setObjectName(QString::fromUtf8("text_output"));
        text_output->setGeometry(QRect(20, 50, 351, 51));
        label_2 = new QLabel(centralwidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(20, 130, 72, 15));
        text_input = new QTextEdit(centralwidget);
        text_input->setObjectName(QString::fromUtf8("text_input"));
        text_input->setGeometry(QRect(20, 160, 351, 51));
        generate_Button = new QPushButton(centralwidget);
        generate_Button->setObjectName(QString::fromUtf8("generate_Button"));
        generate_Button->setGeometry(QRect(70, 300, 93, 28));
        examine_Button = new QPushButton(centralwidget);
        examine_Button->setObjectName(QString::fromUtf8("examine_Button"));
        examine_Button->setGeometry(QRect(240, 300, 93, 28));
        label_3 = new QLabel(centralwidget);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(120, 250, 72, 15));
        Accuracy_num = new QLabel(centralwidget);
        Accuracy_num->setObjectName(QString::fromUtf8("Accuracy_num"));
        Accuracy_num->setGeometry(QRect(200, 250, 72, 15));
        MainWindow->setCentralWidget(centralwidget);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "\347\233\256\346\240\207\357\274\232", nullptr));
        text_output->setPlaceholderText(QCoreApplication::translate("MainWindow", "\350\257\267\347\202\271\345\207\273\342\200\234\347\224\237\346\210\220\342\200\235\351\224\256\347\224\237\346\210\220\347\233\256\346\240\207\345\255\227\347\254\246\344\270\262", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "\350\276\223\345\205\245\357\274\232", nullptr));
        text_input->setPlaceholderText(QCoreApplication::translate("MainWindow", "\350\257\267\350\276\223\345\205\245\342\200\234\347\233\256\346\240\207\342\200\235\346\226\207\346\234\254\346\241\206\345\206\205\347\224\237\346\210\220\347\232\204\345\255\227\347\254\246\344\270\262", nullptr));
        generate_Button->setText(QCoreApplication::translate("MainWindow", "\347\224\237\346\210\220", nullptr));
        examine_Button->setText(QCoreApplication::translate("MainWindow", "\346\243\200\346\237\245", nullptr));
        label_3->setText(QCoreApplication::translate("MainWindow", "\345\207\206\347\241\256\347\216\207\357\274\232", nullptr));
        Accuracy_num->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
