#ifndef D_DONGNANMEN_H
#define D_DONGNANMEN_H

#include <QDialog>

namespace Ui {
class d_dongnanmen;
}

class d_dongnanmen : public QDialog
{
    Q_OBJECT

public:
    explicit d_dongnanmen(QWidget *parent = nullptr);
    ~d_dongnanmen();

private slots:
    void on_pushButton_clicked();

private:
    Ui::d_dongnanmen *ui;
};

#endif // D_DONGNANMEN_H
