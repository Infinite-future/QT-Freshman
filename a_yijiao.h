#ifndef A_YIJIAO_H
#define A_YIJIAO_H

#include <QDialog>

namespace Ui {
class A_yijiao;
}

class A_yijiao : public QDialog
{
    Q_OBJECT

public:
    explicit A_yijiao(QWidget *parent = nullptr);
    ~A_yijiao();

private slots:
    void on_pushButton_clicked();

private:
    Ui::A_yijiao *ui;
};

#endif // A_YIJIAO_H
