#include "c_nongyuan.h"
#include "ui_c_nongyuan.h"

c_nongyuan::c_nongyuan(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::c_nongyuan)
{
    ui->setupUi(this);
}

c_nongyuan::~c_nongyuan()
{
    delete ui;
}
