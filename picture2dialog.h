#ifndef PICTURE2DIALOG_H
#define PICTURE2DIALOG_H

#include <QDialog>

namespace Ui {
class picture2Dialog;
}

class picture2Dialog : public QDialog
{
    Q_OBJECT

public:
    explicit picture2Dialog(QWidget *parent = nullptr);
    ~picture2Dialog();

private slots:
    void on_pushButton_clicked();

private:
    Ui::picture2Dialog *ui;
};

#endif // PICTURE2DIALOG_H
