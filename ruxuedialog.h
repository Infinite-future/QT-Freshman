#ifndef RUXUEDIALOG_H
#define RUXUEDIALOG_H

#include <QDialog>

namespace Ui {
class ruxueDialog;
}

class ruxueDialog : public QDialog
{
    Q_OBJECT

public:
    explicit ruxueDialog(QWidget *parent = nullptr);
    ~ruxueDialog();

private:
    Ui::ruxueDialog *ui;
};

#endif // RUXUEDIALOG_H
