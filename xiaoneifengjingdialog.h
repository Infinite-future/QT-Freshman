#ifndef XIAONEIFENGJINGDIALOG_H
#define XIAONEIFENGJINGDIALOG_H

#include <QDialog>

namespace Ui {
class xiaoneifengjingDialog;
}

class xiaoneifengjingDialog : public QDialog
{
    Q_OBJECT

public:
    explicit xiaoneifengjingDialog(QWidget *parent = nullptr);
    ~xiaoneifengjingDialog();

private slots:
    void on_xnfwpb1_clicked();

    void on_xnfwpb2_clicked();


    void on_pb1_clicked();

    void on_pb2_clicked();

    void on_pb3_clicked();

    void on_pb4_clicked();

    void on_pb5_clicked();

    void on_pb6_clicked();

    void on_pb7_clicked();

    void on_pb8_clicked();

    void on_pb9_clicked();

    void on_pb10_clicked();

private:
    Ui::xiaoneifengjingDialog *ui;
};

#endif // XIAONEIFENGJINGDIALOG_H
