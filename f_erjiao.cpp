#include "f_erjiao.h"
#include "ui_f_erjiao.h"

e_erjiao::e_erjiao(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::e_erjiao)
{
    ui->setupUi(this);
}

e_erjiao::~e_erjiao()
{
    delete ui;
}
