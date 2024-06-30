#include "b_yiyuan.h"
#include "ui_b_yiyuan.h"

b_yiyuan::b_yiyuan(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::b_yiyuan)
{
    ui->setupUi(this);
}

b_yiyuan::~b_yiyuan()
{
    delete ui;
}
