#ifndef B_NONGYUAN_H
#define B_NONGYUAN_H

#include <QDialog>

namespace Ui {
class b_nongyuan;
}

class b_nongyuan : public QDialog
{
    Q_OBJECT

public:
    explicit b_nongyuan(QWidget *parent = nullptr);
    ~b_nongyuan();

private:
    Ui::b_nongyuan *ui;
};

#endif // B_NONGYUAN_H
