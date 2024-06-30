#include "c_lvzhihe.h"
#include "ui_c_lvzhihe.h"

c_lvzhihe::c_lvzhihe(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::c_lvzhihe)
{
    ui->setupUi(this);
}

c_lvzhihe::~c_lvzhihe()
{
    delete ui;
}
