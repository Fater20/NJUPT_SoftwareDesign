#ifndef RATINGC_H
#define RATINGC_H

#include <QDialog>

namespace Ui {
class ratingc;
}

class ratingc : public QDialog
{
    Q_OBJECT

public:
    explicit ratingc(QWidget *parent = nullptr);
    ~ratingc();

private:
    Ui::ratingc *ui;
};

#endif // RATINGC_H
