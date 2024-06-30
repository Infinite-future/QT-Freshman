#include "d_dongmen.h"
#include "ui_d_dongmen.h"
#include"mapdialog.h"
d_dongmen::d_dongmen(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::d_dongmen)
{
    ui->setupUi(this);
}

d_dongmen::~d_dongmen()
{
    delete ui;
}

void d_dongmen::on_pushButton_clicked()
{
    mapdialog* m=new mapdialog;
    this->close();
    m->show();
}

