#include "f_lijiao.h"
#include "ui_f_lijiao.h"

f_lijiao::f_lijiao(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::f_lijiao)
{
    ui->setupUi(this);
}

f_lijiao::~f_lijiao()
{
    delete ui;
}
