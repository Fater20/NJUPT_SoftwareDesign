/********************************************************************************
** Form generated from reading UI file 'sort_dialog.ui'
**
** Created by: Qt User Interface Compiler version 6.1.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SORT_DIALOG_H
#define UI_SORT_DIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAbstractButton>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QTableView>

QT_BEGIN_NAMESPACE

class Ui_sort_dialog
{
public:
    QDialogButtonBox *buttonBox;
    QTableView *tableView;

    void setupUi(QDialog *sort_dialog)
    {
        if (sort_dialog->objectName().isEmpty())
            sort_dialog->setObjectName(QString::fromUtf8("sort_dialog"));
        sort_dialog->resize(299, 264);
        buttonBox = new QDialogButtonBox(sort_dialog);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setGeometry(QRect(10, 220, 261, 32));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel);
        tableView = new QTableView(sort_dialog);
        tableView->setObjectName(QString::fromUtf8("tableView"));
        tableView->setGeometry(QRect(20, 20, 256, 192));

        retranslateUi(sort_dialog);
        QObject::connect(buttonBox, &QDialogButtonBox::rejected, sort_dialog, qOverload<>(&QDialog::reject));
        QObject::connect(buttonBox, &QDialogButtonBox::accepted, sort_dialog, qOverload<>(&QDialog::accept));

        QMetaObject::connectSlotsByName(sort_dialog);
    } // setupUi

    void retranslateUi(QDialog *sort_dialog)
    {
        sort_dialog->setWindowTitle(QCoreApplication::translate("sort_dialog", "Sort results", nullptr));
#if QT_CONFIG(whatsthis)
        tableView->setWhatsThis(QString());
#endif // QT_CONFIG(whatsthis)
    } // retranslateUi

};

namespace Ui {
    class sort_dialog: public Ui_sort_dialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SORT_DIALOG_H
