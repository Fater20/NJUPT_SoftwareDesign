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
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QRadioButton *bin_radioButton;
    QRadioButton *oct_radioButton;
    QRadioButton *dec_radioButton;
    QRadioButton *hex_radioButton;
    QTextEdit *bin_input;
    QTextEdit *oct_input;
    QTextEdit *dec_input;
    QTextEdit *hex_input;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QPushButton *transfer_Button;
    QLabel *error_label;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(400, 450);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        bin_radioButton = new QRadioButton(centralwidget);
        bin_radioButton->setObjectName(QString::fromUtf8("bin_radioButton"));
        bin_radioButton->setGeometry(QRect(80, 60, 16, 20));
        oct_radioButton = new QRadioButton(centralwidget);
        oct_radioButton->setObjectName(QString::fromUtf8("oct_radioButton"));
        oct_radioButton->setGeometry(QRect(80, 120, 16, 20));
        dec_radioButton = new QRadioButton(centralwidget);
        dec_radioButton->setObjectName(QString::fromUtf8("dec_radioButton"));
        dec_radioButton->setGeometry(QRect(80, 180, 16, 20));
        hex_radioButton = new QRadioButton(centralwidget);
        hex_radioButton->setObjectName(QString::fromUtf8("hex_radioButton"));
        hex_radioButton->setGeometry(QRect(80, 240, 16, 20));
        bin_input = new QTextEdit(centralwidget);
        bin_input->setObjectName(QString::fromUtf8("bin_input"));
        bin_input->setGeometry(QRect(210, 50, 110, 41));
        oct_input = new QTextEdit(centralwidget);
        oct_input->setObjectName(QString::fromUtf8("oct_input"));
        oct_input->setGeometry(QRect(210, 110, 110, 41));
        dec_input = new QTextEdit(centralwidget);
        dec_input->setObjectName(QString::fromUtf8("dec_input"));
        dec_input->setGeometry(QRect(210, 170, 110, 41));
        hex_input = new QTextEdit(centralwidget);
        hex_input->setObjectName(QString::fromUtf8("hex_input"));
        hex_input->setGeometry(QRect(210, 230, 110, 41));
        label = new QLabel(centralwidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(130, 60, 41, 21));
        QFont font;
        font.setPointSize(12);
        label->setFont(font);
        label->setScaledContents(false);
        label_2 = new QLabel(centralwidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(130, 120, 41, 21));
        label_2->setFont(font);
        label_2->setScaledContents(false);
        label_3 = new QLabel(centralwidget);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(130, 180, 41, 21));
        label_3->setFont(font);
        label_3->setScaledContents(false);
        label_4 = new QLabel(centralwidget);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(130, 240, 41, 21));
        label_4->setFont(font);
        label_4->setScaledContents(false);
        transfer_Button = new QPushButton(centralwidget);
        transfer_Button->setObjectName(QString::fromUtf8("transfer_Button"));
        transfer_Button->setGeometry(QRect(150, 350, 80, 22));
        error_label = new QLabel(centralwidget);
        error_label->setObjectName(QString::fromUtf8("error_label"));
        error_label->setGeometry(QRect(120, 310, 145, 28));
        QFont font1;
        font1.setPointSize(10);
        error_label->setFont(font1);
        error_label->setAlignment(Qt::AlignCenter);
        MainWindow->setCentralWidget(centralwidget);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);
        QObject::connect(transfer_Button, SIGNAL(clicked()), MainWindow, SLOT(transfer()));

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        bin_radioButton->setText(QString());
        oct_radioButton->setText(QString());
        dec_radioButton->setText(QString());
        hex_radioButton->setText(QString());
        label->setText(QCoreApplication::translate("MainWindow", "BIN", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "OCT", nullptr));
        label_3->setText(QCoreApplication::translate("MainWindow", "DEC", nullptr));
        label_4->setText(QCoreApplication::translate("MainWindow", "HEX", nullptr));
        transfer_Button->setText(QCoreApplication::translate("MainWindow", "\350\275\254\346\215\242", nullptr));
        error_label->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
