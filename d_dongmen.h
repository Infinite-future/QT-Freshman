#ifndef D_DONGMEN_H
#define D_DONGMEN_H

#include <QDialog>

namespace Ui {
class d_dongmen;
}

class d_dongmen : public QDialog
{
    Q_OBJECT

public:
    explicit d_dongmen(QWidget *parent = nullptr);
    ~d_dongmen();

private slots:
    void on_pushButton_clicked();

private:
    Ui::d_dongmen *ui;
};

#endif // D_DONGMEN_H
