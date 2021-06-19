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
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QPushButton *A1Button;
    QPushButton *A2Button;
    QPushButton *A3Button;
    QPushButton *A4Button;
    QPushButton *A5Button;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QPushButton *B1Button;
    QPushButton *B2Button;
    QLabel *label_5;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(507, 442);
        QFont font;
        font.setPointSize(10);
        font.setBold(true);
        MainWindow->setFont(font);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        A1Button = new QPushButton(centralwidget);
        A1Button->setObjectName(QString::fromUtf8("A1Button"));
        A1Button->setGeometry(QRect(80, 150, 351, 21));
        A1Button->setFont(font);
        A2Button = new QPushButton(centralwidget);
        A2Button->setObjectName(QString::fromUtf8("A2Button"));
        A2Button->setGeometry(QRect(80, 190, 351, 21));
        A2Button->setFont(font);
        A3Button = new QPushButton(centralwidget);
        A3Button->setObjectName(QString::fromUtf8("A3Button"));
        A3Button->setGeometry(QRect(80, 230, 351, 21));
        A4Button = new QPushButton(centralwidget);
        A4Button->setObjectName(QString::fromUtf8("A4Button"));
        A4Button->setGeometry(QRect(80, 270, 351, 21));
        A5Button = new QPushButton(centralwidget);
        A5Button->setObjectName(QString::fromUtf8("A5Button"));
        A5Button->setGeometry(QRect(80, 310, 351, 21));
        label = new QLabel(centralwidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(150, 40, 301, 41));
        QFont font1;
        font1.setPointSize(12);
        font1.setBold(true);
        label->setFont(font1);
        label_2 = new QLabel(centralwidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(170, 90, 251, 21));
        QFont font2;
        font2.setPointSize(10);
        font2.setBold(true);
        font2.setItalic(true);
        label_2->setFont(font2);
        label_3 = new QLabel(centralwidget);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(50, 30, 91, 101));
        label_3->setPixmap(QPixmap(QString::fromUtf8(":/new/prefix1/pic/njupt.png")));
        label_3->setScaledContents(true);
        label_4 = new QLabel(centralwidget);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(0, 0, 511, 501));
        label_4->setMinimumSize(QSize(511, 501));
        label_4->setMaximumSize(QSize(511, 401));
        label_4->setPixmap(QPixmap(QString::fromUtf8(":/new/prefix1/pic/background.png")));
        label_4->setScaledContents(true);
        B1Button = new QPushButton(centralwidget);
        B1Button->setObjectName(QString::fromUtf8("B1Button"));
        B1Button->setGeometry(QRect(80, 350, 351, 21));
        B2Button = new QPushButton(centralwidget);
        B2Button->setObjectName(QString::fromUtf8("B2Button"));
        B2Button->setGeometry(QRect(80, 390, 351, 21));
        label_5 = new QLabel(centralwidget);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(370, 70, 71, 71));
        label_5->setPixmap(QPixmap(QString::fromUtf8(":/new/prefix1/pic/100.png")));
        label_5->setScaledContents(true);
        MainWindow->setCentralWidget(centralwidget);
        label_4->raise();
        A1Button->raise();
        A2Button->raise();
        A3Button->raise();
        A4Button->raise();
        A5Button->raise();
        label->raise();
        label_2->raise();
        label_3->raise();
        B1Button->raise();
        B2Button->raise();
        label_5->raise();
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);
        QObject::connect(A2Button, SIGNAL(clicked()), MainWindow, SLOT(jumpA2()));
        QObject::connect(A3Button, SIGNAL(clicked()), MainWindow, SLOT(jumpA3()));
        QObject::connect(A4Button, SIGNAL(clicked()), MainWindow, SLOT(jumpA4()));
        QObject::connect(A5Button, SIGNAL(clicked()), MainWindow, SLOT(jumpA5()));
        QObject::connect(B1Button, SIGNAL(clicked()), MainWindow, SLOT(jumpB1()));
        QObject::connect(B2Button, SIGNAL(clicked()), MainWindow, SLOT(jumpB2()));
        QObject::connect(A1Button, SIGNAL(clicked()), MainWindow, SLOT(jumpA1()));

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        A1Button->setText(QCoreApplication::translate("MainWindow", "A1: \345\210\206\346\225\260\347\273\237\350\256\241", nullptr));
        A2Button->setText(QCoreApplication::translate("MainWindow", "A2: \346\211\223\345\255\227\347\250\213\345\272\217", nullptr));
        A3Button->setText(QCoreApplication::translate("MainWindow", "A3: \346\226\207\346\234\254\347\274\226\350\276\221\345\231\250", nullptr));
        A4Button->setText(QCoreApplication::translate("MainWindow", "A4: \345\212\240\345\257\206", nullptr));
        A5Button->setText(QCoreApplication::translate("MainWindow", "A5: \350\277\233\345\210\266\350\275\254\346\215\242\345\231\250", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "\345\215\227\344\272\254\351\202\256\347\224\265\345\244\247\345\255\246-\347\224\265\345\255\220\347\247\221\345\255\246\344\270\216\346\212\200\346\234\257-\350\275\257\344\273\266\350\256\276\350\256\241", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "Design by : B18020110 \344\270\245\345\256\207\346\201\222", nullptr));
        label_3->setText(QString());
        label_4->setText(QString());
        B1Button->setText(QCoreApplication::translate("MainWindow", "B1: \345\255\246\347\224\237\346\210\220\347\273\251\346\240\270\347\256\227\347\263\273\347\273\237", nullptr));
        B2Button->setText(QCoreApplication::translate("MainWindow", "B2: \346\250\241\346\213\237\347\224\265\344\277\241\350\256\241\350\264\271\347\263\273\347\273\237", nullptr));
        label_5->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
