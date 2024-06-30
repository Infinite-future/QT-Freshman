#include "c_baijiangxi.h"
#include "ui_c_baijiangxi.h"

c_baijiangxi::c_baijiangxi(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::c_baijiangxi)
{
    ui->setupUi(this);
}

c_baijiangxi::~c_baijiangxi()
{
    delete ui;
}
