#ifndef C_BAIJIANGXI_H
#define C_BAIJIANGXI_H

#include <QDialog>

namespace Ui {
class c_baijiangxi;
}

class c_baijiangxi : public QDialog
{
    Q_OBJECT

public:
    explicit c_baijiangxi(QWidget *parent = nullptr);
    ~c_baijiangxi();

private:
    Ui::c_baijiangxi *ui;
};

#endif // C_BAIJIANGXI_H
