#include "f_wusi.h"
#include "ui_f_wusi.h"

f_wusi::f_wusi(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::f_wusi)
{
    ui->setupUi(this);
}

f_wusi::~f_wusi()
{
    delete ui;
}
