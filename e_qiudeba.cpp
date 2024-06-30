#include "e_qiudeba.h"
#include "ui_e_qiudeba.h"
#include"mapdialog.h"
e_qiudeba::e_qiudeba(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::e_qiudeba)
{
    ui->setupUi(this);
}

e_qiudeba::~e_qiudeba()
{
    delete ui;
}

void e_qiudeba::on_pushButton_clicked()
{
    mapdialog* m=new mapdialog;
    this->close();
    m->show();
}

