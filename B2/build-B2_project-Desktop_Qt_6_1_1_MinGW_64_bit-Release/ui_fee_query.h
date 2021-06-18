/********************************************************************************
** Form generated from reading UI file 'fee_query.ui'
**
** Created by: Qt User Interface Compiler version 6.1.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FEE_QUERY_H
#define UI_FEE_QUERY_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_fee_query
{
public:
    QTextBrowser *textBrowser;
    QTextBrowser *textBrowser_2;
    QTextBrowser *textBrowser_3;
    QTextBrowser *textBrowser_4;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *label_5;
    QTextBrowser *textBrowser_5;

    void setupUi(QWidget *fee_query)
    {
        if (fee_query->objectName().isEmpty())
            fee_query->setObjectName(QString::fromUtf8("fee_query"));
        fee_query->resize(290, 240);
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(fee_query->sizePolicy().hasHeightForWidth());
        fee_query->setSizePolicy(sizePolicy);
        fee_query->setMinimumSize(QSize(290, 240));
        fee_query->setMaximumSize(QSize(290, 240));
        textBrowser = new QTextBrowser(fee_query);
        textBrowser->setObjectName(QString::fromUtf8("textBrowser"));
        textBrowser->setGeometry(QRect(78, 16, 196, 30));
        QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(textBrowser->sizePolicy().hasHeightForWidth());
        textBrowser->setSizePolicy(sizePolicy1);
        textBrowser_2 = new QTextBrowser(fee_query);
        textBrowser_2->setObjectName(QString::fromUtf8("textBrowser_2"));
        textBrowser_2->setGeometry(QRect(80, 60, 194, 30));
        textBrowser_3 = new QTextBrowser(fee_query);
        textBrowser_3->setObjectName(QString::fromUtf8("textBrowser_3"));
        textBrowser_3->setGeometry(QRect(80, 104, 194, 31));
        textBrowser_4 = new QTextBrowser(fee_query);
        textBrowser_4->setObjectName(QString::fromUtf8("textBrowser_4"));
        textBrowser_4->setGeometry(QRect(80, 149, 194, 31));
        label = new QLabel(fee_query);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(9, 20, 61, 20));
        QFont font;
        font.setPointSize(12);
        label->setFont(font);
        label->setAlignment(Qt::AlignCenter);
        label_2 = new QLabel(fee_query);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(11, 60, 61, 20));
        label_2->setFont(font);
        label_2->setAlignment(Qt::AlignCenter);
        label_3 = new QLabel(fee_query);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(11, 104, 61, 20));
        label_3->setFont(font);
        label_3->setAlignment(Qt::AlignCenter);
        label_4 = new QLabel(fee_query);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(11, 149, 61, 20));
        label_4->setFont(font);
        label_4->setAlignment(Qt::AlignCenter);
        label_5 = new QLabel(fee_query);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(11, 194, 61, 20));
        label_5->setFont(font);
        label_5->setAlignment(Qt::AlignCenter);
        textBrowser_5 = new QTextBrowser(fee_query);
        textBrowser_5->setObjectName(QString::fromUtf8("textBrowser_5"));
        textBrowser_5->setGeometry(QRect(80, 194, 194, 30));

        retranslateUi(fee_query);

        QMetaObject::connectSlotsByName(fee_query);
    } // setupUi

    void retranslateUi(QWidget *fee_query)
    {
        fee_query->setWindowTitle(QCoreApplication::translate("fee_query", "User Call Charges", nullptr));
        label->setText(QCoreApplication::translate("fee_query", "\347\224\250\346\210\267\345\220\215\357\274\232", nullptr));
        label_2->setText(QCoreApplication::translate("fee_query", "\347\224\265\350\257\235\345\217\267\347\240\201", nullptr));
        label_3->setText(QCoreApplication::translate("fee_query", "\346\234\254\345\234\260\350\257\235\350\264\271", nullptr));
        label_4->setText(QCoreApplication::translate("fee_query", "\351\225\277\351\200\224\350\257\235\350\264\271", nullptr));
        label_5->setText(QCoreApplication::translate("fee_query", "\350\257\235\350\264\271\346\200\273\350\256\241", nullptr));
    } // retranslateUi

};

namespace Ui {
    class fee_query: public Ui_fee_query {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FEE_QUERY_H
