#include "e_yiti.h"
#include "ui_e_yiti.h"
#include"mapdialog.h"
e_yiti::e_yiti(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::e_yiti)
{
    ui->setupUi(this);
}

e_yiti::~e_yiti()
{
    delete ui;
}

void e_yiti::on_pushButton_clicked()
{
    mapdialog* m=new mapdialog;
    this->close();
    m->show();
}

