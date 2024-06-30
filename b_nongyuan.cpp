#include "b_nongyuan.h"
#include "ui_b_nongyuan.h"

b_nongyuan::b_nongyuan(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::b_nongyuan)
{
    ui->setupUi(this);
}

b_nongyuan::~b_nongyuan()
{
    delete ui;
}
