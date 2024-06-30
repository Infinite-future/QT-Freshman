#ifndef F_ERJIAO_H
#define F_ERJIAO_H

#include <QDialog>

namespace Ui {
class e_erjiao;
}

class e_erjiao : public QDialog
{
    Q_OBJECT

public:
    explicit e_erjiao(QWidget *parent = nullptr);
    ~e_erjiao();

private:
    Ui::e_erjiao *ui;
};

#endif // F_ERJIAO_H
