#include "b_shaoyuanzhongxicanting.h"
#include "ui_b_shaoyuanzhongxicanting.h"

b_shaoyuanzhongxicanting::b_shaoyuanzhongxicanting(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::b_shaoyuanzhongxicanting)
{
    ui->setupUi(this);
}

b_shaoyuanzhongxicanting::~b_shaoyuanzhongxicanting()
{
    delete ui;
}
