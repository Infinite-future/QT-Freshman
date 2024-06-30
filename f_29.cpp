#include "f_29.h"
#include "ui_f_29.h"

f_29::f_29(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::f_29)
{
    ui->setupUi(this);
}

f_29::~f_29()
{
    delete ui;
}
