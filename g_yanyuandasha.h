#ifndef G_YANYUANDASHA_H
#define G_YANYUANDASHA_H

#include <QDialog>

namespace Ui {
class g_yanyuandasha;
}

class g_yanyuandasha : public QDialog
{
    Q_OBJECT

public:
    explicit g_yanyuandasha(QWidget *parent = nullptr);
    ~g_yanyuandasha();

private:
    Ui::g_yanyuandasha *ui;
};

#endif // G_YANYUANDASHA_H
