#ifndef A_ERJIAO_H
#define A_ERJIAO_H

#include <QDialog>

namespace Ui {
class A_erjiao;
}

class A_erjiao : public QDialog
{
    Q_OBJECT

public:
    explicit A_erjiao(QWidget *parent = nullptr);
    ~A_erjiao();

private slots:
    void on_pushButton_clicked();

private:
    Ui::A_erjiao *ui;
};

#endif // A_ERJIAO_H
