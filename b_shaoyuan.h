#ifndef B_SHAOYUAN_H
#define B_SHAOYUAN_H

#include <QDialog>

namespace Ui {
class b_shaoyuan;
}

class b_shaoyuan : public QDialog
{
    Q_OBJECT

public:
    explicit b_shaoyuan(QWidget *parent = nullptr);
    ~b_shaoyuan();

private:
    Ui::b_shaoyuan *ui;
};

#endif // B_SHAOYUAN_H
