#ifndef E_WUSI_H
#define E_WUSI_H

#include <QDialog>

namespace Ui {
class e_wusi;
}

class e_wusi : public QDialog
{
    Q_OBJECT

public:
    explicit e_wusi(QWidget *parent = nullptr);
    ~e_wusi();

private slots:
    void on_pushButton_clicked();

private:
    Ui::e_wusi *ui;
};

#endif // E_WUSI_H
