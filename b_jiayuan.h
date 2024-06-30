#ifndef B_JIAYUAN_H
#define B_JIAYUAN_H

#include <QDialog>

namespace Ui {
class b_jiayuan;
}

class b_jiayuan : public QDialog
{
    Q_OBJECT

public:
    explicit b_jiayuan(QWidget *parent = nullptr);
    ~b_jiayuan();

private:
    Ui::b_jiayuan *ui;
};

#endif // B_JIAYUAN_H
