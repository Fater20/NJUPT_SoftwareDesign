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
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QHBoxLayout *horizontalLayout_3;
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QLineEdit *lineEdit_name;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_3;
    QLineEdit *lineEdit_score;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_2;
    QLineEdit *lineEdit_num;
    QHBoxLayout *horizontalLayout_5;
    QPushButton *pushButton_next;
    QPushButton *pushButton_sort;
    QPushButton *pushButton_reset;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(314, 222);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        horizontalLayout_3 = new QHBoxLayout(centralwidget);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        horizontalLayout_3->setContentsMargins(-1, -1, -1, 9);
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        label = new QLabel(centralwidget);
        label->setObjectName(QString::fromUtf8("label"));
        QFont font;
        font.setPointSize(12);
        label->setFont(font);

        horizontalLayout->addWidget(label);

        lineEdit_name = new QLineEdit(centralwidget);
        lineEdit_name->setObjectName(QString::fromUtf8("lineEdit_name"));

        horizontalLayout->addWidget(lineEdit_name);


        verticalLayout_2->addLayout(horizontalLayout);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        label_3 = new QLabel(centralwidget);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setFont(font);

        horizontalLayout_4->addWidget(label_3);

        lineEdit_score = new QLineEdit(centralwidget);
        lineEdit_score->setObjectName(QString::fromUtf8("lineEdit_score"));

        horizontalLayout_4->addWidget(lineEdit_score);


        verticalLayout_2->addLayout(horizontalLayout_4);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        label_2 = new QLabel(centralwidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setFont(font);

        horizontalLayout_2->addWidget(label_2);

        lineEdit_num = new QLineEdit(centralwidget);
        lineEdit_num->setObjectName(QString::fromUtf8("lineEdit_num"));

        horizontalLayout_2->addWidget(lineEdit_num);


        verticalLayout_2->addLayout(horizontalLayout_2);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        pushButton_next = new QPushButton(centralwidget);
        pushButton_next->setObjectName(QString::fromUtf8("pushButton_next"));

        horizontalLayout_5->addWidget(pushButton_next);

        pushButton_sort = new QPushButton(centralwidget);
        pushButton_sort->setObjectName(QString::fromUtf8("pushButton_sort"));

        horizontalLayout_5->addWidget(pushButton_sort);

        pushButton_reset = new QPushButton(centralwidget);
        pushButton_reset->setObjectName(QString::fromUtf8("pushButton_reset"));

        horizontalLayout_5->addWidget(pushButton_reset);


        verticalLayout_2->addLayout(horizontalLayout_5);


        horizontalLayout_3->addLayout(verticalLayout_2);

        MainWindow->setCentralWidget(centralwidget);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "Score entry", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "\350\276\223\345\205\245\345\247\223\345\220\215\357\274\232", nullptr));
        label_3->setText(QCoreApplication::translate("MainWindow", "\350\276\223\345\205\245\346\210\220\347\273\251\357\274\232", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "\347\273\237\350\256\241\346\225\260\351\207\217\357\274\232", nullptr));
        pushButton_next->setText(QCoreApplication::translate("MainWindow", "\345\275\225\345\205\245", nullptr));
        pushButton_sort->setText(QCoreApplication::translate("MainWindow", "\346\216\222\345\272\217", nullptr));
        pushButton_reset->setText(QCoreApplication::translate("MainWindow", "\351\207\215\347\275\256", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
