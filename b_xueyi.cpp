#include "b_xueyi.h"
#include "ui_b_xueyi.h"

b_xueyi::b_xueyi(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::b_xueyi)
{
    ui->setupUi(this);
}

b_xueyi::~b_xueyi()
{
    delete ui;
}
