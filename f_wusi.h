#ifndef F_WUSI_H
#define F_WUSI_H

#include <QDialog>

namespace Ui {
class f_wusi;
}

class f_wusi : public QDialog
{
    Q_OBJECT

public:
    explicit f_wusi(QWidget *parent = nullptr);
    ~f_wusi();

private:
    Ui::f_wusi *ui;
};

#endif // F_WUSI_H
