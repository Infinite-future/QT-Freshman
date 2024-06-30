#ifndef MAPDIALOG_H
#define MAPDIALOG_H

#include <QDialog>

namespace Ui {
class mapdialog;
}

class mapdialog : public QDialog
{
    Q_OBJECT

public:
    explicit mapdialog(QWidget *parent = nullptr);
    void paintEvent(QPaintEvent* event);
    ~mapdialog();

private slots:
    void on_mappb1_clicked();

    void on_pushButton_50_clicked();



    void on_pushButton_clicked();

    void on_pushButton_15_clicked();

    void on_pushButton_2_clicked();

    void on_pushButton_5_clicked();

    void on_pushButton_6_clicked();

    void on_pushButton_7_clicked();

    void on_pushButton_3_clicked();

    void on_pushButton_4_clicked();

    void on_pushButton_16_clicked();

    void on_pushButton_19_clicked();

    void on_pushButton_18_clicked();

    void on_pushButton_17_clicked();

    void on_pushButton_26_clicked();

    void on_pushButton_28_clicked();

    void on_pushButton_29_clicked();

    void on_pushButton_31_clicked();

    void on_pushButton_30_clicked();

    void on_pushButton_27_clicked();

    void on_pushButton_44_clicked();

    void on_pushButton_45_clicked();

    void on_pushButton_46_clicked();

private:
    Ui::mapdialog *ui;
};

#endif // MAPDIALOG_H
