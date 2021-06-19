/********************************************************************************
** Form generated from reading UI file 'ratinga.ui'
**
** Created by: Qt User Interface Compiler version 6.1.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_RATINGA_H
#define UI_RATINGA_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QTableWidget>

QT_BEGIN_NAMESPACE

class Ui_ratinga
{
public:
    QFrame *line_4;
    QFrame *line_3;
    QFrame *line_2;
    QLabel *label_3;
    QLabel *label_2;
    QLabel *label_4;
    QLabel *a_number;
    QFrame *line;
    QTableWidget *scoreTable;
    QLabel *label;
    QLabel *a_rate;
    QLabel *label_5;
    QLabel *label_6;

    void setupUi(QDialog *ratinga)
    {
        if (ratinga->objectName().isEmpty())
            ratinga->setObjectName(QString::fromUtf8("ratinga"));
        ratinga->resize(388, 368);
        line_4 = new QFrame(ratinga);
        line_4->setObjectName(QString::fromUtf8("line_4"));
        line_4->setGeometry(QRect(370, 20, 3, 61));
        line_4->setFrameShape(QFrame::VLine);
        line_4->setFrameShadow(QFrame::Sunken);
        line_3 = new QFrame(ratinga);
        line_3->setObjectName(QString::fromUtf8("line_3"));
        line_3->setGeometry(QRect(20, 70, 351, 16));
        line_3->setFrameShape(QFrame::HLine);
        line_3->setFrameShadow(QFrame::Sunken);
        line_2 = new QFrame(ratinga);
        line_2->setObjectName(QString::fromUtf8("line_2"));
        line_2->setGeometry(QRect(20, 20, 3, 61));
        line_2->setFrameShape(QFrame::VLine);
        line_2->setFrameShadow(QFrame::Sunken);
        label_3 = new QLabel(ratinga);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(20, 330, 151, 21));
        QFont font;
        font.setPointSize(11);
        label_3->setFont(font);
        label_2 = new QLabel(ratinga);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(50, 20, 51, 51));
        label_2->setPixmap(QPixmap(QString::fromUtf8(":/new/prefix1/Final_version/Test1_proj/pic/njupt.png")));
        label_2->setScaledContents(true);
        label_4 = new QLabel(ratinga);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(230, 330, 81, 21));
        label_4->setFont(font);
        a_number = new QLabel(ratinga);
        a_number->setObjectName(QString::fromUtf8("a_number"));
        a_number->setGeometry(QRect(170, 330, 51, 21));
        QFont font1;
        font1.setPointSize(10);
        font1.setBold(true);
        a_number->setFont(font1);
        line = new QFrame(ratinga);
        line->setObjectName(QString::fromUtf8("line"));
        line->setGeometry(QRect(20, 10, 351, 16));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);
        scoreTable = new QTableWidget(ratinga);
        if (scoreTable->columnCount() < 6)
            scoreTable->setColumnCount(6);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        scoreTable->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        scoreTable->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        scoreTable->setHorizontalHeaderItem(2, __qtablewidgetitem2);
        QTableWidgetItem *__qtablewidgetitem3 = new QTableWidgetItem();
        scoreTable->setHorizontalHeaderItem(3, __qtablewidgetitem3);
        QTableWidgetItem *__qtablewidgetitem4 = new QTableWidgetItem();
        scoreTable->setHorizontalHeaderItem(4, __qtablewidgetitem4);
        QTableWidgetItem *__qtablewidgetitem5 = new QTableWidgetItem();
        scoreTable->setHorizontalHeaderItem(5, __qtablewidgetitem5);
        scoreTable->setObjectName(QString::fromUtf8("scoreTable"));
        scoreTable->setGeometry(QRect(20, 90, 351, 221));
        scoreTable->setRowCount(0);
        scoreTable->setColumnCount(6);
        scoreTable->horizontalHeader()->setDefaultSectionSize(60);
        label = new QLabel(ratinga);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(120, 30, 221, 31));
        QFont font2;
        font2.setFamilies({QString::fromUtf8("\346\245\267\344\275\223")});
        font2.setPointSize(14);
        font2.setBold(true);
        label->setFont(font2);
        a_rate = new QLabel(ratinga);
        a_rate->setObjectName(QString::fromUtf8("a_rate"));
        a_rate->setGeometry(QRect(300, 330, 91, 21));
        a_rate->setFont(font1);
        label_5 = new QLabel(ratinga);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(330, 20, 41, 41));
        label_5->setPixmap(QPixmap(QString::fromUtf8(":/new/prefix1/Final_version/Test1_proj/pic/100.png")));
        label_5->setScaledContents(true);
        label_6 = new QLabel(ratinga);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setGeometry(QRect(0, 0, 391, 371));
        label_6->setPixmap(QPixmap(QString::fromUtf8(":/new/prefix1/Final_version/Test1_proj/pic/background_4.png")));
        label_6->setScaledContents(true);
        label_6->raise();
        label_5->raise();
        line_4->raise();
        line_3->raise();
        line_2->raise();
        label_3->raise();
        label_2->raise();
        label_4->raise();
        a_number->raise();
        line->raise();
        scoreTable->raise();
        label->raise();
        a_rate->raise();

        retranslateUi(ratinga);

        QMetaObject::connectSlotsByName(ratinga);
    } // setupUi

    void retranslateUi(QDialog *ratinga)
    {
        ratinga->setWindowTitle(QCoreApplication::translate("ratinga", "Dialog", nullptr));
        label_3->setText(QCoreApplication::translate("ratinga", "\"\344\274\230\347\247\200\"\347\255\211\347\272\247\345\255\246\347\224\237\346\200\273\346\225\260\357\274\232", nullptr));
        label_2->setText(QString());
        label_4->setText(QCoreApplication::translate("ratinga", "\346\211\200\345\215\240\346\257\224\344\276\213\357\274\232", nullptr));
        a_number->setText(QCoreApplication::translate("ratinga", "90", nullptr));
        QTableWidgetItem *___qtablewidgetitem = scoreTable->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QCoreApplication::translate("ratinga", "\345\255\246\345\217\267", nullptr));
        QTableWidgetItem *___qtablewidgetitem1 = scoreTable->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QCoreApplication::translate("ratinga", "\345\271\263\346\227\266\346\210\220\347\273\251", nullptr));
        QTableWidgetItem *___qtablewidgetitem2 = scoreTable->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QCoreApplication::translate("ratinga", "\345\215\212\346\234\237\350\200\203\350\257\225", nullptr));
        QTableWidgetItem *___qtablewidgetitem3 = scoreTable->horizontalHeaderItem(3);
        ___qtablewidgetitem3->setText(QCoreApplication::translate("ratinga", "\346\234\237\346\234\253\350\200\203\350\257\225", nullptr));
        QTableWidgetItem *___qtablewidgetitem4 = scoreTable->horizontalHeaderItem(4);
        ___qtablewidgetitem4->setText(QCoreApplication::translate("ratinga", "\346\200\273\350\257\204\346\210\220\347\273\251", nullptr));
        QTableWidgetItem *___qtablewidgetitem5 = scoreTable->horizontalHeaderItem(5);
        ___qtablewidgetitem5->setText(QCoreApplication::translate("ratinga", "\347\255\211\347\272\247", nullptr));
        label->setText(QCoreApplication::translate("ratinga", "\"\344\274\230\347\247\200\"\350\200\203\347\224\237\350\200\203\350\257\225\346\203\205\345\206\265\346\200\273\350\247\210", nullptr));
        a_rate->setText(QCoreApplication::translate("ratinga", "90%", nullptr));
        label_5->setText(QString());
        label_6->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class ratinga: public Ui_ratinga {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_RATINGA_H
