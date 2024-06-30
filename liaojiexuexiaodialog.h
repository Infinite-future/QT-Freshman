#ifndef LIAOJIEXUEXIAODIALOG_H
#define LIAOJIEXUEXIAODIALOG_H

#include <QDialog>

namespace Ui {
class liaojiexuexiaoDialog;
}

class liaojiexuexiaoDialog : public QDialog
{
    Q_OBJECT

public:
    explicit liaojiexuexiaoDialog(QWidget *parent = nullptr);
    ~liaojiexuexiaoDialog();

private slots:
    void on_shijianbiao_clicked();

    void on_ljxxpb5_clicked();

    void on_ljxxpb2_clicked();

    void on_ljxxpb3_clicked();

    void on_ljxxpb4_clicked();

private:
    Ui::liaojiexuexiaoDialog *ui;
};

#endif // LIAOJIEXUEXIAODIALOG_H
