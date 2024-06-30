#include "d_dongcemen.h"
#include "ui_d_dongcemen.h"
#include"mapdialog.h"
d_dongcemen::d_dongcemen(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::d_dongcemen)
{
    ui->setupUi(this);
}

d_dongcemen::~d_dongcemen()
{
    delete ui;
}

void d_dongcemen::on_pushButton_clicked()
{
    mapdialog* m=new mapdialog;
    this->close();
    m->show();
}

