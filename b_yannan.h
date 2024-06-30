#ifndef B_YANNAN_H
#define B_YANNAN_H

#include <QDialog>

namespace Ui {
class b_yannan;
}

class b_yannan : public QDialog
{
    Q_OBJECT

public:
    explicit b_yannan(QWidget *parent = nullptr);
    ~b_yannan();

private:
    Ui::b_yannan *ui;
};

#endif // B_YANNAN_H
