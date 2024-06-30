#ifndef C_LVZHIHE_H
#define C_LVZHIHE_H

#include <QDialog>

namespace Ui {
class c_lvzhihe;
}

class c_lvzhihe : public QDialog
{
    Q_OBJECT

public:
    explicit c_lvzhihe(QWidget *parent = nullptr);
    ~c_lvzhihe();

private:
    Ui::c_lvzhihe *ui;
};

#endif // C_LVZHIHE_H
