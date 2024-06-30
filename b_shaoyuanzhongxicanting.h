#ifndef B_SHAOYUANZHONGXICANTING_H
#define B_SHAOYUANZHONGXICANTING_H

#include <QDialog>

namespace Ui {
class b_shaoyuanzhongxicanting;
}

class b_shaoyuanzhongxicanting : public QDialog
{
    Q_OBJECT

public:
    explicit b_shaoyuanzhongxicanting(QWidget *parent = nullptr);
    ~b_shaoyuanzhongxicanting();

private:
    Ui::b_shaoyuanzhongxicanting *ui;
};

#endif // B_SHAOYUANZHONGXICANTING_H
