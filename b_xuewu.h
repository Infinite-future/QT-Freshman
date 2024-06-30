#ifndef B_XUEWU_H
#define B_XUEWU_H

#include <QDialog>

namespace Ui {
class b_xuewu;
}

class b_xuewu : public QDialog
{
    Q_OBJECT

public:
    explicit b_xuewu(QWidget *parent = nullptr);
    ~b_xuewu();

private:
    Ui::b_xuewu *ui;
};

#endif // B_XUEWU_H
