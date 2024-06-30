#include "a_yijiao.h"
#include "ui_a_yijiao.h"
#include"mapdialog.h"
A_yijiao::A_yijiao(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::A_yijiao)
{
    ui->setupUi(this);
}

A_yijiao::~A_yijiao()
{
    delete ui;
}

void A_yijiao::on_pushButton_clicked()
{
    mapdialog* m=new mapdialog;
    this->close();
    m->show();
}

