#include "b_xuewu.h"
#include "ui_b_xuewu.h"

b_xuewu::b_xuewu(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::b_xuewu)
{
    ui->setupUi(this);
}

b_xuewu::~b_xuewu()
{
    delete ui;
}
