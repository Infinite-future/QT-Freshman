#ifndef B_YIYUAN_H
#define B_YIYUAN_H

#include <QDialog>

namespace Ui {
class b_yiyuan;
}

class b_yiyuan : public QDialog
{
    Q_OBJECT

public:
    explicit b_yiyuan(QWidget *parent = nullptr);
    ~b_yiyuan();

private:
    Ui::b_yiyuan *ui;
};

#endif // B_YIYUAN_H
