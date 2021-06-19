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
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *label_5;
    QLabel *label_6;
    QTextBrowser *maxScore;
    QTextBrowser *minScore;
    QTextBrowser *averageScore;
    QPushButton *pushButton;
    QPushButton *showAll;
    QLabel *label_7;
    QTextBrowser *stuNum;
    QPushButton *showA;
    QPushButton *showB;
    QPushButton *showC;
    QPushButton *showD;
    QPushButton *showE;
    QLabel *label_8;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(472, 334);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        label = new QLabel(centralwidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(200, 10, 121, 51));
        QFont font;
        font.setFamilies({QString::fromUtf8("\346\245\267\344\275\223")});
        font.setPointSize(14);
        font.setBold(true);
        font.setUnderline(false);
        label->setFont(font);
        label->setTextFormat(Qt::MarkdownText);
        label_2 = new QLabel(centralwidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(60, 10, 71, 81));
        label_2->setPixmap(QPixmap(QString::fromUtf8(":/new/prefix1/pic/njupt.png")));
        label_2->setScaledContents(true);
        label_3 = new QLabel(centralwidget);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(160, 40, 211, 41));
        QFont font1;
        font1.setFamilies({QString::fromUtf8("\346\245\267\344\275\223")});
        font1.setPointSize(12);
        font1.setBold(false);
        font1.setItalic(false);
        label_3->setFont(font1);
        label_4 = new QLabel(centralwidget);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(230, 160, 61, 16));
        QFont font2;
        font2.setFamilies({QString::fromUtf8("\345\276\256\350\275\257\351\233\205\351\273\221")});
        font2.setBold(false);
        label_4->setFont(font2);
        label_5 = new QLabel(centralwidget);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(230, 210, 61, 16));
        label_5->setFont(font2);
        label_6 = new QLabel(centralwidget);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setGeometry(QRect(230, 260, 61, 16));
        QFont font3;
        font3.setFamilies({QString::fromUtf8("\345\276\256\350\275\257\351\233\205\351\273\221")});
        label_6->setFont(font3);
        maxScore = new QTextBrowser(centralwidget);
        maxScore->setObjectName(QString::fromUtf8("maxScore"));
        maxScore->setGeometry(QRect(300, 160, 131, 31));
        QFont font4;
        font4.setPointSize(11);
        maxScore->setFont(font4);
        minScore = new QTextBrowser(centralwidget);
        minScore->setObjectName(QString::fromUtf8("minScore"));
        minScore->setGeometry(QRect(300, 210, 131, 31));
        minScore->setFont(font4);
        averageScore = new QTextBrowser(centralwidget);
        averageScore->setObjectName(QString::fromUtf8("averageScore"));
        averageScore->setGeometry(QRect(300, 260, 131, 31));
        averageScore->setFont(font4);
        pushButton = new QPushButton(centralwidget);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(30, 110, 171, 31));
        QFont font5;
        font5.setFamilies({QString::fromUtf8("\345\256\213\344\275\223")});
        font5.setPointSize(10);
        pushButton->setFont(font5);
        showAll = new QPushButton(centralwidget);
        showAll->setObjectName(QString::fromUtf8("showAll"));
        showAll->setGeometry(QRect(30, 150, 171, 31));
        showAll->setFont(font5);
        label_7 = new QLabel(centralwidget);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setGeometry(QRect(230, 110, 61, 16));
        label_7->setFont(font2);
        stuNum = new QTextBrowser(centralwidget);
        stuNum->setObjectName(QString::fromUtf8("stuNum"));
        stuNum->setGeometry(QRect(300, 110, 131, 31));
        stuNum->setFont(font4);
        showA = new QPushButton(centralwidget);
        showA->setObjectName(QString::fromUtf8("showA"));
        showA->setGeometry(QRect(30, 200, 80, 20));
        showB = new QPushButton(centralwidget);
        showB->setObjectName(QString::fromUtf8("showB"));
        showB->setGeometry(QRect(120, 200, 80, 20));
        showC = new QPushButton(centralwidget);
        showC->setObjectName(QString::fromUtf8("showC"));
        showC->setGeometry(QRect(30, 230, 80, 20));
        showD = new QPushButton(centralwidget);
        showD->setObjectName(QString::fromUtf8("showD"));
        showD->setGeometry(QRect(120, 230, 80, 20));
        showE = new QPushButton(centralwidget);
        showE->setObjectName(QString::fromUtf8("showE"));
        showE->setGeometry(QRect(30, 260, 171, 20));
        label_8 = new QLabel(centralwidget);
        label_8->setObjectName(QString::fromUtf8("label_8"));
        label_8->setGeometry(QRect(0, 0, 471, 311));
        label_8->setPixmap(QPixmap(QString::fromUtf8(":/new/prefix1/pic/background.png")));
        label_8->setScaledContents(true);
        MainWindow->setCentralWidget(centralwidget);
        label_8->raise();
        label->raise();
        label_2->raise();
        label_3->raise();
        label_4->raise();
        label_5->raise();
        label_6->raise();
        maxScore->raise();
        minScore->raise();
        averageScore->raise();
        pushButton->raise();
        showAll->raise();
        label_7->raise();
        stuNum->raise();
        showA->raise();
        showB->raise();
        showC->raise();
        showD->raise();
        showE->raise();
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);
        QObject::connect(pushButton, SIGNAL(clicked()), MainWindow, SLOT(readScore()));
        QObject::connect(showAll, SIGNAL(clicked()), MainWindow, SLOT(showAll()));
        QObject::connect(showA, SIGNAL(clicked()), MainWindow, SLOT(showA()));
        QObject::connect(showB, SIGNAL(clicked()), MainWindow, SLOT(showB()));
        QObject::connect(showC, SIGNAL(clicked()), MainWindow, SLOT(showC()));
        QObject::connect(showD, SIGNAL(clicked()), MainWindow, SLOT(showD()));
        QObject::connect(showE, SIGNAL(clicked()), MainWindow, SLOT(showE()));

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "\345\215\227\344\272\254\351\202\256\347\224\265\345\244\247\345\255\246", nullptr));
        label_2->setText(QString());
        label_3->setText(QCoreApplication::translate("MainWindow", "\347\224\265\345\205\211\345\276\256\351\231\242-\345\255\246\347\224\237\346\210\220\347\273\251\346\240\270\347\256\227\347\263\273\347\273\237", nullptr));
        label_4->setText(QCoreApplication::translate("MainWindow", "\347\217\255\347\272\247\346\234\200\351\253\230\345\210\206", nullptr));
        label_5->setText(QCoreApplication::translate("MainWindow", "\347\217\255\347\272\247\346\234\200\344\275\216\345\210\206", nullptr));
        label_6->setText(QCoreApplication::translate("MainWindow", "\347\217\255\347\272\247\345\271\263\345\235\207\345\210\206", nullptr));
        pushButton->setText(QCoreApplication::translate("MainWindow", "\350\257\273\345\217\226\346\210\220\347\273\251", nullptr));
        showAll->setText(QCoreApplication::translate("MainWindow", "\346\237\245\347\234\213\350\200\203\350\257\225\346\200\273\350\257\246\346\203\205", nullptr));
        label_7->setText(QCoreApplication::translate("MainWindow", "\347\217\255\347\272\247\346\200\273\344\272\272\346\225\260", nullptr));
        showA->setText(QCoreApplication::translate("MainWindow", "\342\200\234\344\274\230\347\247\200\342\200\235\350\257\246\346\203\205", nullptr));
        showB->setText(QCoreApplication::translate("MainWindow", "\342\200\234\350\211\257\345\245\275\342\200\235\350\257\246\346\203\205", nullptr));
        showC->setText(QCoreApplication::translate("MainWindow", "\342\200\234\344\270\255\347\255\211\342\200\235\350\257\246\346\203\205", nullptr));
        showD->setText(QCoreApplication::translate("MainWindow", "\342\200\234\345\217\212\346\240\274\342\200\235\350\257\246\346\203\205", nullptr));
        showE->setText(QCoreApplication::translate("MainWindow", "\342\200\234\344\270\215\345\220\210\346\240\274\342\200\235\350\257\246\346\203\205", nullptr));
        label_8->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
