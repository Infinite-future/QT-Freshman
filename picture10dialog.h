#ifndef PICTURE10DIALOG_H
#define PICTURE10DIALOG_H

#include <QDialog>

namespace Ui {
class picture10Dialog;
}

class picture10Dialog : public QDialog
{
    Q_OBJECT

public:
    explicit picture10Dialog(QWidget *parent = nullptr);
    ~picture10Dialog();

private slots:
    void on_pushButton_clicked();

private:
    Ui::picture10Dialog *ui;
};

#endif // PICTURE10DIALOG_H
