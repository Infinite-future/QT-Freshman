#ifndef F_29_H
#define F_29_H

#include <QDialog>

namespace Ui {
class f_29;
}

class f_29 : public QDialog
{
    Q_OBJECT

public:
    explicit f_29(QWidget *parent = nullptr);
    ~f_29();

private:
    Ui::f_29 *ui;
};

#endif // F_29_H
