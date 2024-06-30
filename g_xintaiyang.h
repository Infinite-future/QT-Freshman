#ifndef G_XINTAIYANG_H
#define G_XINTAIYANG_H

#include <QDialog>

namespace Ui {
class g_xintaiyang;
}

class g_xintaiyang : public QDialog
{
    Q_OBJECT

public:
    explicit g_xintaiyang(QWidget *parent = nullptr);
    ~g_xintaiyang();

private slots:
    void on_pushButton_clicked();

private:
    Ui::g_xintaiyang *ui;
};

#endif // G_XINTAIYANG_H
