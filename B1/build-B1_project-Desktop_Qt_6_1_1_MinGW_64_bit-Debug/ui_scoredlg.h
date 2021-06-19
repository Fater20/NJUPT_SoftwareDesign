/********************************************************************************
** Form generated from reading UI file 'scoredlg.ui'
**
** Created by: Qt User Interface Compiler version 6.1.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SCOREDLG_H
#define UI_SCOREDLG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QTableWidget>

QT_BEGIN_NAMESPACE

class Ui_scoreDlg
{
public:
    QLabel *label_2;
    QFrame *line_3;
    QFrame *line_4;
    QTableWidget *scoreTable;
    QLabel *label;
    QFrame *line_2;
    QFrame *line;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *aveLabel;
    QLabel *passRate;
    QLabel *label_6;

    void setupUi(QDialog *scoreDlg)
    {
        if (scoreDlg->objectName().isEmpty())
            scoreDlg->setObjectName(QString::fromUtf8("scoreDlg"));
        scoreDlg->resize(390, 371);
        label_2 = new QLabel(scoreDlg);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(50, 10, 51, 51));
        label_2->setPixmap(QPixmap(QString::fromUtf8(":/new/prefix1/Final_version/Test1_proj/pic/njupt.png")));
        label_2->setScaledContents(true);
        line_3 = new QFrame(scoreDlg);
        line_3->setObjectName(QString::fromUtf8("line_3"));
        line_3->setGeometry(QRect(20, 60, 351, 16));
        line_3->setFrameShape(QFrame::HLine);
        line_3->setFrameShadow(QFrame::Sunken);
        line_4 = new QFrame(scoreDlg);
        line_4->setObjectName(QString::fromUtf8("line_4"));
        line_4->setGeometry(QRect(370, 10, 3, 61));
        line_4->setFrameShape(QFrame::VLine);
        line_4->setFrameShadow(QFrame::Sunken);
        scoreTable = new QTableWidget(scoreDlg);
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
        scoreTable->setGeometry(QRect(20, 80, 351, 221));
        scoreTable->setRowCount(0);
        scoreTable->setColumnCount(6);
        scoreTable->horizontalHeader()->setDefaultSectionSize(60);
        label = new QLabel(scoreDlg);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(120, 20, 221, 31));
        QFont font;
        font.setFamilies({QString::fromUtf8("\346\245\267\344\275\223")});
        font.setPointSize(14);
        font.setBold(true);
        label->setFont(font);
        line_2 = new QFrame(scoreDlg);
        line_2->setObjectName(QString::fromUtf8("line_2"));
        line_2->setGeometry(QRect(20, 10, 3, 61));
        line_2->setFrameShape(QFrame::VLine);
        line_2->setFrameShadow(QFrame::Sunken);
        line = new QFrame(scoreDlg);
        line->setObjectName(QString::fromUtf8("line"));
        line->setGeometry(QRect(20, 0, 351, 16));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);
        label_3 = new QLabel(scoreDlg);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(30, 320, 121, 21));
        QFont font1;
        font1.setPointSize(11);
        label_3->setFont(font1);
        label_4 = new QLabel(scoreDlg);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(220, 320, 61, 21));
        label_4->setFont(font1);
        aveLabel = new QLabel(scoreDlg);
        aveLabel->setObjectName(QString::fromUtf8("aveLabel"));
        aveLabel->setGeometry(QRect(150, 320, 51, 21));
        QFont font2;
        font2.setPointSize(10);
        font2.setBold(true);
        aveLabel->setFont(font2);
        passRate = new QLabel(scoreDlg);
        passRate->setObjectName(QString::fromUtf8("passRate"));
        passRate->setGeometry(QRect(280, 320, 91, 21));
        passRate->setFont(font2);
        label_6 = new QLabel(scoreDlg);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setGeometry(QRect(0, 0, 391, 371));
        label_6->setPixmap(QPixmap(QString::fromUtf8(":/new/prefix1/Final_version/Test1_proj/pic/background_4.png")));
        label_6->setScaledContents(true);
        label_6->raise();
        label_2->raise();
        line_3->raise();
        line_4->raise();
        scoreTable->raise();
        label->raise();
        line_2->raise();
        line->raise();
        label_3->raise();
        label_4->raise();
        aveLabel->raise();
        passRate->raise();

        retranslateUi(scoreDlg);

        QMetaObject::connectSlotsByName(scoreDlg);
    } // setupUi

    void retranslateUi(QDialog *scoreDlg)
    {
        scoreDlg->setWindowTitle(QCoreApplication::translate("scoreDlg", "Dialog", nullptr));
        label_2->setText(QString());
        QTableWidgetItem *___qtablewidgetitem = scoreTable->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QCoreApplication::translate("scoreDlg", "\345\255\246\345\217\267", nullptr));
        QTableWidgetItem *___qtablewidgetitem1 = scoreTable->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QCoreApplication::translate("scoreDlg", "\345\271\263\346\227\266\346\210\220\347\273\251", nullptr));
        QTableWidgetItem *___qtablewidgetitem2 = scoreTable->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QCoreApplication::translate("scoreDlg", "\345\215\212\346\234\237\350\200\203\350\257\225", nullptr));
        QTableWidgetItem *___qtablewidgetitem3 = scoreTable->horizontalHeaderItem(3);
        ___qtablewidgetitem3->setText(QCoreApplication::translate("scoreDlg", "\346\234\237\346\234\253\350\200\203\350\257\225", nullptr));
        QTableWidgetItem *___qtablewidgetitem4 = scoreTable->horizontalHeaderItem(4);
        ___qtablewidgetitem4->setText(QCoreApplication::translate("scoreDlg", "\346\200\273\350\257\204\346\210\220\347\273\251", nullptr));
        QTableWidgetItem *___qtablewidgetitem5 = scoreTable->horizontalHeaderItem(5);
        ___qtablewidgetitem5->setText(QCoreApplication::translate("scoreDlg", "\347\255\211\347\272\247", nullptr));
        label->setText(QCoreApplication::translate("scoreDlg", "\346\211\200\346\234\211\350\200\203\347\224\237\350\200\203\350\257\225\346\203\205\345\206\265\346\200\273\350\247\210", nullptr));
        label_3->setText(QCoreApplication::translate("scoreDlg", "\347\217\255\347\272\247\346\200\273\350\257\204\345\271\263\345\235\207\345\210\206\357\274\232", nullptr));
        label_4->setText(QCoreApplication::translate("scoreDlg", "\345\217\212\346\240\274\347\216\207\357\274\232", nullptr));
        aveLabel->setText(QCoreApplication::translate("scoreDlg", "90", nullptr));
        passRate->setText(QCoreApplication::translate("scoreDlg", "90%", nullptr));
        label_6->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class scoreDlg: public Ui_scoreDlg {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SCOREDLG_H
