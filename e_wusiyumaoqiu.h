#ifndef E_WUSIYUMAOQIU_H
#define E_WUSIYUMAOQIU_H

#include <QDialog>

namespace Ui {
class e_wusiyumaoqiu;
}

class e_wusiyumaoqiu : public QDialog
{
    Q_OBJECT

public:
    explicit e_wusiyumaoqiu(QWidget *parent = nullptr);
    ~e_wusiyumaoqiu();

private slots:
    void on_pushButton_clicked();

private:
    Ui::e_wusiyumaoqiu *ui;
};

#endif // E_WUSIYUMAOQIU_H
