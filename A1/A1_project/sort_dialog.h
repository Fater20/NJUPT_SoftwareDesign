#ifndef SORT_DIALOG_H
#define SORT_DIALOG_H

#include <QDialog>
#include <QStandardItemModel>

namespace Ui {
class sort_dialog;
}

class sort_dialog : public QDialog
{
    Q_OBJECT

public:
    explicit sort_dialog(QWidget *parent = nullptr);
    ~sort_dialog();

private:
    Ui::sort_dialog *ui;
    QStandardItemModel *model;
};

#endif // SORT_DIALOG_H
