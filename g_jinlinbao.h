#ifndef G_JINLINBAO_H
#define G_JINLINBAO_H

#include <QDialog>

namespace Ui {
class g_jinlinbao;
}

class g_jinlinbao : public QDialog
{
    Q_OBJECT

public:
    explicit g_jinlinbao(QWidget *parent = nullptr);
    ~g_jinlinbao();

private:
    Ui::g_jinlinbao *ui;
};

#endif // G_JINLINBAO_H
