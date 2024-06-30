#ifndef G_TUSHUGUAN_H
#define G_TUSHUGUAN_H

#include <QDialog>

namespace Ui {
class g_tushuguan;
}

class g_tushuguan : public QDialog
{
    Q_OBJECT

public:
    explicit g_tushuguan(QWidget *parent = nullptr);
    ~g_tushuguan();

private slots:
    void on_pushButton_clicked();

private:
    Ui::g_tushuguan *ui;
};

#endif // G_TUSHUGUAN_H
