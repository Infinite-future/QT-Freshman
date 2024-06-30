#include "e_wusiyumaoqiu.h"
#include "ui_e_wusiyumaoqiu.h"
#include"mapdialog.h"
e_wusiyumaoqiu::e_wusiyumaoqiu(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::e_wusiyumaoqiu)
{
    ui->setupUi(this);
}

e_wusiyumaoqiu::~e_wusiyumaoqiu()
{
    delete ui;
}

void e_wusiyumaoqiu::on_pushButton_clicked()
{
    mapdialog* m=new mapdialog;
    this->close();
    m->show();
}

