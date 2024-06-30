#ifndef C_NONGYUAN_H
#define C_NONGYUAN_H

#include <QDialog>

namespace Ui {
class c_nongyuan;
}

class c_nongyuan : public QDialog
{
    Q_OBJECT

public:
    explicit c_nongyuan(QWidget *parent = nullptr);
    ~c_nongyuan();

private:
    Ui::c_nongyuan *ui;
};

#endif // C_NONGYUAN_H
