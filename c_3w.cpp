#include "c_3w.h"
#include "ui_c_3w.h"

c_3w::c_3w(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::c_3w)
{
    ui->setupUi(this);
}

c_3w::~c_3w()
{
    delete ui;
}
