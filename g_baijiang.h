#ifndef G_BAIJIANG_H
#define G_BAIJIANG_H

#include <QDialog>

namespace Ui {
class g_baijiang;
}

class g_baijiang : public QDialog
{
    Q_OBJECT

public:
    explicit g_baijiang(QWidget *parent = nullptr);
    ~g_baijiang();

private slots:
    void on_pushButton_clicked();

private:
    Ui::g_baijiang *ui;
};

#endif // G_BAIJIANG_H
