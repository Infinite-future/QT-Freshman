#ifndef F_LIJIAO_H
#define F_LIJIAO_H

#include <QDialog>

namespace Ui {
class f_lijiao;
}

class f_lijiao : public QDialog
{
    Q_OBJECT

public:
    explicit f_lijiao(QWidget *parent = nullptr);
    ~f_lijiao();

private:
    Ui::f_lijiao *ui;
};

#endif // F_LIJIAO_H
