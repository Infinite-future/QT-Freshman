#ifndef C_JIAYUAN_H
#define C_JIAYUAN_H

#include <QDialog>

namespace Ui {
class c_jiayuan;
}

class c_jiayuan : public QDialog
{
    Q_OBJECT

public:
    explicit c_jiayuan(QWidget *parent = nullptr);
    ~c_jiayuan();

private:
    Ui::c_jiayuan *ui;
};

#endif // C_JIAYUAN_H
