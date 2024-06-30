#ifndef D_XIMEN_H
#define D_XIMEN_H

#include <QDialog>

namespace Ui {
class d_ximen;
}

class d_ximen : public QDialog
{
    Q_OBJECT

public:
    explicit d_ximen(QWidget *parent = nullptr);
    ~d_ximen();

private slots:
    void on_pushButton_clicked();

private:
    Ui::d_ximen *ui;
};

#endif // D_XIMEN_H
