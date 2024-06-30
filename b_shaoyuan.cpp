#include "b_shaoyuan.h"
#include "ui_b_shaoyuan.h"

b_shaoyuan::b_shaoyuan(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::b_shaoyuan)
{
    ui->setupUi(this);
}

b_shaoyuan::~b_shaoyuan()
{
    delete ui;
}
