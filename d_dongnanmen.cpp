#include "d_dongnanmen.h"
#include "ui_d_dongnanmen.h"
#include"mapdialog.h"
d_dongnanmen::d_dongnanmen(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::d_dongnanmen)
{
    ui->setupUi(this);
}

d_dongnanmen::~d_dongnanmen()
{
    delete ui;
}

void d_dongnanmen::on_pushButton_clicked()
{
    mapdialog* m=new mapdialog;
    this->close();
    m->show();
}
