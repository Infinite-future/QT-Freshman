#include "a_erjiao.h"
#include "ui_a_erjiao.h"
#include"mapdialog.h"
A_erjiao::A_erjiao(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::A_erjiao)
{
    ui->setupUi(this);
}

A_erjiao::~A_erjiao()
{
    delete ui;
}

void A_erjiao::on_pushButton_clicked()
{
    mapdialog* m=new mapdialog;
    this->close();
    m->show();
}

