#ifndef RATINGE_H
#define RATINGE_H

#include <QDialog>

namespace Ui {
class ratinge;
}

class ratinge : public QDialog
{
    Q_OBJECT

public:
    explicit ratinge(QWidget *parent = nullptr);
    ~ratinge();

private:
    Ui::ratinge *ui;
};

#endif // RATINGE_H
