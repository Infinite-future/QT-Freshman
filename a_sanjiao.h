#ifndef A_SANJIAO_H
#define A_SANJIAO_H

#include <QDialog>

namespace Ui {
class a_sanjiao;
}

class a_sanjiao : public QDialog
{
    Q_OBJECT

public:
    explicit a_sanjiao(QWidget *parent = nullptr);
    ~a_sanjiao();

private slots:
    void on_pushButton_clicked();

private:
    Ui::a_sanjiao *ui;
};

#endif // A_SANJIAO_H
