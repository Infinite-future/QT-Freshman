#include "g_jinlinbao.h"
#include "ui_g_jinlinbao.h"

g_jinlinbao::g_jinlinbao(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::g_jinlinbao)
{
    ui->setupUi(this);
}

g_jinlinbao::~g_jinlinbao()
{
    delete ui;
}
