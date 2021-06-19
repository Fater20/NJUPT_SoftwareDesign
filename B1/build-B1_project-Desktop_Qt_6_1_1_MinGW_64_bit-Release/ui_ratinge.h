/********************************************************************************
** Form generated from reading UI file 'ratinge.ui'
**
** Created by: Qt User Interface Compiler version 6.1.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_RATINGE_H
#define UI_RATINGE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QTableWidget>

QT_BEGIN_NAMESPACE

class Ui_ratinge
{
public:
    QTableWidget *scoreTable;
    QFrame *line;
    QLabel *label_3;
    QLabel *label_4;
    QFrame *line_2;
    QLabel *e_rate;
    QFrame *line_3;
    QFrame *line_4;
    QLabel *label;
    QLabel *label_2;
    QLabel *e_number;
    QLabel *label_6;

    void setupUi(QDialog *ratinge)
    {
        if (ratinge->objectName().isEmpty())
            ratinge->setObjectName(QString::fromUtf8("ratinge"));
        ratinge->resize(388, 360);
        scoreTable = new QTableWidget(ratinge);
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
        line = new QFrame(ratinge);
        line->setObjectName(QString::fromUtf8("line"));
        line->setGeometry(QRect(20, 10, 351, 16));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);
        label_3 = new QLabel(ratinge);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(20, 330, 171, 21));
        QFont font;
        font.setPointSize(11);
        label_3->setFont(font);
        label_4 = new QLabel(ratinge);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(230, 330, 81, 21));
        label_4->setFont(font);
        line_2 = new QFrame(ratinge);
        line_2->setObjectName(QString::fromUtf8("line_2"));
        line_2->setGeometry(QRect(20, 20, 3, 61));
        line_2->setFrameShape(QFrame::VLine);
        line_2->setFrameShadow(QFrame::Sunken);
        e_rate = new QLabel(ratinge);
        e_rate->setObjectName(QString::fromUtf8("e_rate"));
        e_rate->setGeometry(QRect(300, 330, 91, 21));
        QFont font1;
        font1.setPointSize(10);
        font1.setBold(true);
        e_rate->setFont(font1);
        line_3 = new QFrame(ratinge);
        line_3->setObjectName(QString::fromUtf8("line_3"));
        line_3->setGeometry(QRect(20, 70, 351, 16));
        line_3->setFrameShape(QFrame::HLine);
        line_3->setFrameShadow(QFrame::Sunken);
        line_4 = new QFrame(ratinge);
        line_4->setObjectName(QString::fromUtf8("line_4"));
        line_4->setGeometry(QRect(370, 20, 3, 61));
        line_4->setFrameShape(QFrame::VLine);
        line_4->setFrameShadow(QFrame::Sunken);
        label = new QLabel(ratinge);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(120, 30, 231, 31));
        QFont font2;
        font2.setFamilies({QString::fromUtf8("\346\245\267\344\275\223")});
        font2.setPointSize(14);
        font2.setBold(true);
        label->setFont(font2);
        label_2 = new QLabel(ratinge);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(50, 20, 51, 51));
        label_2->setPixmap(QPixmap(QString::fromUtf8(":/new/prefix1/Final_version/Test1_proj/pic/njupt.png")));
        label_2->setScaledContents(true);
        e_number = new QLabel(ratinge);
        e_number->setObjectName(QString::fromUtf8("e_number"));
        e_number->setGeometry(QRect(180, 330, 41, 21));
        e_number->setFont(font1);
        label_6 = new QLabel(ratinge);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setGeometry(QRect(0, 0, 391, 371));
        label_6->setPixmap(QPixmap(QString::fromUtf8(":/new/prefix1/Final_version/Test1_proj/pic/background_4.png")));
        label_6->setScaledContents(true);
        label_6->raise();
        scoreTable->raise();
        line->raise();
        label_3->raise();
        label_4->raise();
        line_2->raise();
        e_rate->raise();
        line_3->raise();
        line_4->raise();
        label->raise();
        label_2->raise();
        e_number->raise();

        retranslateUi(ratinge);

        QMetaObject::connectSlotsByName(ratinge);
    } // setupUi

    void retranslateUi(QDialog *ratinge)
    {
        ratinge->setWindowTitle(QCoreApplication::translate("ratinge", "Dialog", nullptr));
        QTableWidgetItem *___qtablewidgetitem = scoreTable->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QCoreApplication::translate("ratinge", "\345\255\246\345\217\267", nullptr));
        QTableWidgetItem *___qtablewidgetitem1 = scoreTable->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QCoreApplication::translate("ratinge", "\345\271\263\346\227\266\346\210\220\347\273\251", nullptr));
        QTableWidgetItem *___qtablewidgetitem2 = scoreTable->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QCoreApplication::translate("ratinge", "\345\215\212\346\234\237\350\200\203\350\257\225", nullptr));
        QTableWidgetItem *___qtablewidgetitem3 = scoreTable->horizontalHeaderItem(3);
        ___qtablewidgetitem3->setText(QCoreApplication::translate("ratinge", "\346\234\237\346\234\253\350\200\203\350\257\225", nullptr));
        QTableWidgetItem *___qtablewidgetitem4 = scoreTable->horizontalHeaderItem(4);
        ___qtablewidgetitem4->setText(QCoreApplication::translate("ratinge", "\346\200\273\350\257\204\346\210\220\347\273\251", nullptr));
        QTableWidgetItem *___qtablewidgetitem5 = scoreTable->horizontalHeaderItem(5);
        ___qtablewidgetitem5->setText(QCoreApplication::translate("ratinge", "\347\255\211\347\272\247", nullptr));
        label_3->setText(QCoreApplication::translate("ratinge", "\"\344\270\215\345\217\212\346\240\274\"\347\255\211\347\272\247\345\255\246\347\224\237\346\200\273\346\225\260\357\274\232", nullptr));
        label_4->setText(QCoreApplication::translate("ratinge", "\346\211\200\345\215\240\346\257\224\344\276\213\357\274\232", nullptr));
        e_rate->setText(QCoreApplication::translate("ratinge", "90%", nullptr));
        label->setText(QCoreApplication::translate("ratinge", "\"\344\270\215\345\217\212\346\240\274\"\350\200\203\347\224\237\350\200\203\350\257\225\346\203\205\345\206\265\346\200\273\350\247\210", nullptr));
        label_2->setText(QString());
        e_number->setText(QCoreApplication::translate("ratinge", "90", nullptr));
        label_6->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class ratinge: public Ui_ratinge {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_RATINGE_H
