#ifndef FRESHMANDIALOG_H
#define FRESHMANDIALOG_H
#include<QProcess>
#include <QDialog>
#include <QPainter>
QT_BEGIN_NAMESPACE
namespace Ui {
class FreshmanDialog;
}
QT_END_NAMESPACE

class FreshmanDialog : public QDialog
{
    Q_OBJECT

public:
    FreshmanDialog(QWidget *parent = nullptr);
    ~FreshmanDialog();
    void paintEvent(QPaintEvent * event);
private slots:
    void on_pb1_clicked();

    void on_pb2_clicked();

    void on_pb3_clicked();

private:
    Ui::FreshmanDialog *ui;
};
#endif // FRESHMANDIALOG_H
