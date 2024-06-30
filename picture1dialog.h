#ifndef PICTURE1DIALOG_H
#define PICTURE1DIALOG_H

#include <QDialog>

namespace Ui {
class picture1Dialog;
}

class picture1Dialog : public QDialog
{
    Q_OBJECT

public:
    explicit picture1Dialog(QWidget *parent = nullptr);
    ~picture1Dialog();

private slots:
    void on_pushButton_clicked();

private:
    Ui::picture1Dialog *ui;
};

#endif // PICTURE1DIALOG_H
