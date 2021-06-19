#ifndef RATINGD_H
#define RATINGD_H

#include <QDialog>

namespace Ui {
class ratingd;
}

class ratingd : public QDialog
{
    Q_OBJECT

public:
    explicit ratingd(QWidget *parent = nullptr);
    ~ratingd();

private:
    Ui::ratingd *ui;
};

#endif // RATINGD_H
