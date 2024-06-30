#ifndef F_45_H
#define F_45_H

#include <QDialog>

namespace Ui {
class f_45;
}

class f_45 : public QDialog
{
    Q_OBJECT

public:
    explicit f_45(QWidget *parent = nullptr);
    ~f_45();

private:
    Ui::f_45 *ui;
};

#endif // F_45_H
