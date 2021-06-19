#ifndef RATINGB_H
#define RATINGB_H

#include <QDialog>

namespace Ui {
class ratingb;
}

class ratingb : public QDialog
{
    Q_OBJECT

public:
    explicit ratingb(QWidget *parent = nullptr);
    ~ratingb();

private:
    Ui::ratingb *ui;
};

#endif // RATINGB_H
