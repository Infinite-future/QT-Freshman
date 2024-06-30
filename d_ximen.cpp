#include "d_ximen.h"
#include "ui_d_ximen.h"
#include"mapdialog.h"
d_ximen::d_ximen(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::d_ximen)
{
    ui->setupUi(this);
}

d_ximen::~d_ximen()
{
    delete ui;
}

void d_ximen::on_pushButton_clicked()
{
    mapdialog* m=new mapdialog;
    this->close();
    m->show();
}

