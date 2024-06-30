#ifndef E_ERTI_H
#define E_ERTI_H

#include <QDialog>

namespace Ui {
class e_erti;
}

class e_erti : public QDialog
{
    Q_OBJECT

public:
    explicit e_erti(QWidget *parent = nullptr);
    ~e_erti();

private slots:
    void on_pushButton_clicked();

private:
    Ui::e_erti *ui;
};

#endif // E_ERTI_H
