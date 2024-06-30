#ifndef A_LIJIAO_H
#define A_LIJIAO_H

#include <QDialog>

namespace Ui {
class a_lijiao;
}

class a_lijiao : public QDialog
{
    Q_OBJECT

public:
    explicit a_lijiao(QWidget *parent = nullptr);
    ~a_lijiao();

private slots:
    void on_pushButton_clicked();

private:
    Ui::a_lijiao *ui;
};

#endif // A_LIJIAO_H
