#ifndef B_TONGYUAN_H
#define B_TONGYUAN_H

#include <QDialog>

namespace Ui {
class tongyuan;
}

class tongyuan : public QDialog
{
    Q_OBJECT

public:
    explicit tongyuan(QWidget *parent = nullptr);
    ~tongyuan();

private:
    Ui::tongyuan *ui;
};

#endif // B_TONGYUAN_H
