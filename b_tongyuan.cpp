#include "b_tongyuan.h"
#include "ui_b_tongyuan.h"

tongyuan::tongyuan(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::tongyuan)
{
    ui->setupUi(this);
}

tongyuan::~tongyuan()
{
    delete ui;
}
