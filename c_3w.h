#ifndef C_3W_H
#define C_3W_H

#include <QDialog>

namespace Ui {
class c_3w;
}

class c_3w : public QDialog
{
    Q_OBJECT

public:
    explicit c_3w(QWidget *parent = nullptr);
    ~c_3w();

private:
    Ui::c_3w *ui;
};

#endif // C_3W_H
