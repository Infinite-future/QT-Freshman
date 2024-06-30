#ifndef B_XUEYI_H
#define B_XUEYI_H

#include <QDialog>

namespace Ui {
class b_xueyi;
}

class b_xueyi : public QDialog
{
    Q_OBJECT

public:
    explicit b_xueyi(QWidget *parent = nullptr);
    ~b_xueyi();

private:
    Ui::b_xueyi *ui;
};

#endif // B_XUEYI_H
