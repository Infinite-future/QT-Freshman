#include "d_xicemen.h"
#include "ui_d_xicemen.h"
#include"mapdialog.h"
d_xicemen::d_xicemen(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::d_xicemen)
{
    ui->setupUi(this);
}

d_xicemen::~d_xicemen()
{
    delete ui;
}

void d_xicemen::on_pushButton_clicked()
{
    mapdialog* m=new mapdialog;
    this->close();
    m->show();
}

