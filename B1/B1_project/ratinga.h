#ifndef RATINGA_H
#define RATINGA_H

#include <QDialog>

namespace Ui {
class ratinga;
}

class ratinga : public QDialog
{
    Q_OBJECT

public:
    explicit ratinga(QWidget *parent = nullptr);
    ~ratinga();

private:
    Ui::ratinga *ui;
};

#endif // RATINGA_H
