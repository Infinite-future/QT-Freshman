#ifndef B_SONGLIN_H
#define B_SONGLIN_H

#include <QDialog>

namespace Ui {
class b_songlin;
}

class b_songlin : public QDialog
{
    Q_OBJECT

public:
    explicit b_songlin(QWidget *parent = nullptr);
    ~b_songlin();

private:
    Ui::b_songlin *ui;
};

#endif // B_SONGLIN_H
