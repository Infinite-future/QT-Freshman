#ifndef A_LIYI_H
#define A_LIYI_H

#include <QDialog>

namespace Ui {
class a_liyi;
}

class a_liyi : public QDialog
{
    Q_OBJECT

public:
    explicit a_liyi(QWidget *parent = nullptr);
    ~a_liyi();

private slots:
    void on_pushButton_clicked();

private:
    Ui::a_liyi *ui;
};

#endif // A_LIYI_H
