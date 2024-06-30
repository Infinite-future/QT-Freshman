#ifndef E_YITI_H
#define E_YITI_H

#include <QDialog>

namespace Ui {
class e_yiti;
}

class e_yiti : public QDialog
{
    Q_OBJECT

public:
    explicit e_yiti(QWidget *parent = nullptr);
    ~e_yiti();

private slots:
    void on_pushButton_clicked();

private:
    Ui::e_yiti *ui;
};

#endif // E_YITI_H
