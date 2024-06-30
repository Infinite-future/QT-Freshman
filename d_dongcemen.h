#ifndef D_DONGCEMEN_H
#define D_DONGCEMEN_H

#include <QDialog>

namespace Ui {
class d_dongcemen;
}

class d_dongcemen : public QDialog
{
    Q_OBJECT

public:
    explicit d_dongcemen(QWidget *parent = nullptr);
    ~d_dongcemen();

private slots:
    void on_pushButton_clicked();

private:
    Ui::d_dongcemen *ui;
};

#endif // D_DONGCEMEN_H
