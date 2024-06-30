#include "f_45.h"
#include "ui_f_45.h"

f_45::f_45(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::f_45)
{
    ui->setupUi(this);
}

f_45::~f_45()
{
    delete ui;
}
