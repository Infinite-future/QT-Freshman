#ifndef A_WENSHI_H
#define A_WENSHI_H

#include <QDialog>

namespace Ui {
class a_wenshi;
}

class a_wenshi : public QDialog
{
    Q_OBJECT

public:
    explicit a_wenshi(QWidget *parent = nullptr);
    ~a_wenshi();

private slots:
    void on_pushButton_clicked();

private:
    Ui::a_wenshi *ui;
};

#endif // A_WENSHI_H
