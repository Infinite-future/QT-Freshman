#ifndef A_SIJIAO_H
#define A_SIJIAO_H

#include <QDialog>

namespace Ui {
class a_sijiao;
}

class a_sijiao : public QDialog
{
    Q_OBJECT

public:
    explicit a_sijiao(QWidget *parent = nullptr);
    ~a_sijiao();

private slots:
    void on_pushButton_clicked();

private:
    Ui::a_sijiao *ui;
};

#endif // A_SIJIAO_H
