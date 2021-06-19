#ifndef SCOREDLG_H
#define SCOREDLG_H

#include <QDialog>
//#include "mainwindow.h"

namespace Ui {
class scoreDlg;
}

class scoreDlg : public QDialog
{
    Q_OBJECT

public:
    explicit scoreDlg(QWidget *parent = nullptr);
    ~scoreDlg();

private:
    Ui::scoreDlg *ui;
};

#endif // SCOREDLG_H
