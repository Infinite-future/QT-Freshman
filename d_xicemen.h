#ifndef D_XICEMEN_H
#define D_XICEMEN_H

#include <QDialog>

namespace Ui {
class d_xicemen;
}

class d_xicemen : public QDialog
{
    Q_OBJECT

public:
    explicit d_xicemen(QWidget *parent = nullptr);
    ~d_xicemen();

private slots:
    void on_pushButton_clicked();

private:
    Ui::d_xicemen *ui;
};

#endif // D_XICEMEN_H
