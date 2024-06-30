#ifndef TIMEDIALOG_H
#define TIMEDIALOG_H

#include <QDialog>

namespace Ui {
class timeDialog;
}

class timeDialog : public QDialog
{
    Q_OBJECT

public:
    explicit timeDialog(QWidget *parent = nullptr);
    ~timeDialog();

private slots:
    void on_timepb1_clicked();

private:
    Ui::timeDialog *ui;
};

#endif // TIMEDIALOG_H
