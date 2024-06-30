#ifndef SHITANGCHAOSHIDIALOG_H
#define SHITANGCHAOSHIDIALOG_H

#include <QDialog>

namespace Ui {
class shitangchaoshiDialog;
}

class shitangchaoshiDialog : public QDialog
{
    Q_OBJECT

public:
    explicit shitangchaoshiDialog(QWidget *parent = nullptr);
    ~shitangchaoshiDialog();

private slots:
    void on_stcspb1_clicked();

    void on_stcspb2_clicked();

private:
    Ui::shitangchaoshiDialog *ui;
};

#endif // SHITANGCHAOSHIDIALOG_H
