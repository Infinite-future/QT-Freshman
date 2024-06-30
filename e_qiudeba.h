#ifndef E_QIUDEBA_H
#define E_QIUDEBA_H

#include <QDialog>

namespace Ui {
class e_qiudeba;
}

class e_qiudeba : public QDialog
{
    Q_OBJECT

public:
    explicit e_qiudeba(QWidget *parent = nullptr);
    ~e_qiudeba();

private slots:
    void on_pushButton_clicked();

private:
    Ui::e_qiudeba *ui;
};

#endif // E_QIUDEBA_H
