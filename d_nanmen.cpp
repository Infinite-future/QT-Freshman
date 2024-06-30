#include "d_nanmen.h"
#include "ui_d_nanmen.h"
#include"mapdialog.h"
d_nanmen::d_nanmen(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::d_nanmen)
{
    ui->setupUi(this);
}

d_nanmen::~d_nanmen()
{
    delete ui;
}

void d_nanmen::on_pushButton_clicked()
{
    mapdialog* m=new mapdialog;
    this->close();
    m->show();
}

