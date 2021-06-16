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
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QTextEdit *M_text;
    QTextEdit *C_text;
    QPushButton *Encrypt_Button;
    QPushButton *Decrypt_Button;
    QLabel *M_label;
    QLabel *C_label;
    QTextEdit *K_text;
    QLabel *K_label;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(400, 300);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        M_text = new QTextEdit(centralwidget);
        M_text->setObjectName(QString::fromUtf8("M_text"));
        M_text->setGeometry(QRect(20, 150, 111, 50));
        C_text = new QTextEdit(centralwidget);
        C_text->setObjectName(QString::fromUtf8("C_text"));
        C_text->setGeometry(QRect(260, 150, 111, 50));
        Encrypt_Button = new QPushButton(centralwidget);
        Encrypt_Button->setObjectName(QString::fromUtf8("Encrypt_Button"));
        Encrypt_Button->setGeometry(QRect(150, 140, 93, 28));
        Decrypt_Button = new QPushButton(centralwidget);
        Decrypt_Button->setObjectName(QString::fromUtf8("Decrypt_Button"));
        Decrypt_Button->setGeometry(QRect(150, 190, 93, 28));
        M_label = new QLabel(centralwidget);
        M_label->setObjectName(QString::fromUtf8("M_label"));
        M_label->setGeometry(QRect(60, 130, 41, 16));
        C_label = new QLabel(centralwidget);
        C_label->setObjectName(QString::fromUtf8("C_label"));
        C_label->setGeometry(QRect(290, 130, 41, 20));
        K_text = new QTextEdit(centralwidget);
        K_text->setObjectName(QString::fromUtf8("K_text"));
        K_text->setGeometry(QRect(150, 80, 90, 32));
        K_label = new QLabel(centralwidget);
        K_label->setObjectName(QString::fromUtf8("K_label"));
        K_label->setGeometry(QRect(170, 60, 41, 16));
        MainWindow->setCentralWidget(centralwidget);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);
        QObject::connect(Encrypt_Button, SIGNAL(clicked()), MainWindow, SLOT(MtoC()));
        QObject::connect(Decrypt_Button, SIGNAL(clicked()), MainWindow, SLOT(CtoM()));

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        M_text->setPlaceholderText(QCoreApplication::translate("MainWindow", "\345\255\227\346\257\215A-Z\346\210\226a-z", nullptr));
        C_text->setPlaceholderText(QCoreApplication::translate("MainWindow", "\345\255\227\346\257\215A-Z\346\210\226a-z", nullptr));
        Encrypt_Button->setText(QCoreApplication::translate("MainWindow", "\345\212\240\345\257\206", nullptr));
        Decrypt_Button->setText(QCoreApplication::translate("MainWindow", "\350\247\243\345\257\206", nullptr));
        M_label->setText(QCoreApplication::translate("MainWindow", "\346\230\216\346\226\207M", nullptr));
        C_label->setText(QCoreApplication::translate("MainWindow", "\345\257\206\346\226\207C", nullptr));
        K_text->setPlaceholderText(QCoreApplication::translate("MainWindow", "\346\225\260\345\255\227", nullptr));
        K_label->setText(QCoreApplication::translate("MainWindow", "\345\257\206\351\222\245K", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
