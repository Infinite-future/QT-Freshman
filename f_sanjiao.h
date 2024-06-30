#ifndef F_SANJIAO_H
#define F_SANJIAO_H

#include <QDialog>

namespace Ui {
class f_sanjiao;
}

class f_sanjiao : public QDialog
{
    Q_OBJECT

public:
    explicit f_sanjiao(QWidget *parent = nullptr);
    ~f_sanjiao();

private:
    Ui::f_sanjiao *ui;
};

#endif // F_SANJIAO_H
