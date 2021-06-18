#ifndef FEE_QUERY_H
#define FEE_QUERY_H

#include <QWidget>
//#include "mainwindow.h"

namespace Ui {
class fee_query;
}

class fee_query : public QWidget
{
    Q_OBJECT

public:
    explicit fee_query(QWidget *parent = nullptr);
    ~fee_query();


private:
    void caculate_fee();
    void display_fee();

private:
    Ui::fee_query *ui;
};

#endif // FEE_QUERY_H
