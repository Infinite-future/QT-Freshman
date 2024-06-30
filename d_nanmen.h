#ifndef D_NANMEN_H
#define D_NANMEN_H

#include <QDialog>

namespace Ui {
class d_nanmen;
}

class d_nanmen : public QDialog
{
    Q_OBJECT

public:
    explicit d_nanmen(QWidget *parent = nullptr);
    ~d_nanmen();

private slots:
    void on_pushButton_clicked();

private:
    Ui::d_nanmen *ui;
};

#endif // D_NANMEN_H
