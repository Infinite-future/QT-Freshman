#ifndef SHENGHUOFUWUDIALOG_H
#define SHENGHUOFUWUDIALOG_H

#include <QDialog>

namespace Ui {
class shenghuofuwuDialog;
}

class shenghuofuwuDialog : public QDialog
{
    Q_OBJECT

public:
    explicit shenghuofuwuDialog(QWidget *parent = nullptr);
    ~shenghuofuwuDialog();

private slots:
    void on_shfwpb1_clicked();

    void on_shfwpb2_clicked();

private:
    Ui::shenghuofuwuDialog *ui;
};

#endif // SHENGHUOFUWUDIALOG_H
