#include "f_sanjiao.h"
#include "ui_f_sanjiao.h"

f_sanjiao::f_sanjiao(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::f_sanjiao)
{
    ui->setupUi(this);
}

f_sanjiao::~f_sanjiao()
{
    delete ui;
}
