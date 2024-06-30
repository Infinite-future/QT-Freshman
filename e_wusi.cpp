#include "e_wusi.h"
#include "ui_e_wusi.h"
#include"mapdialog.h"
e_wusi::e_wusi(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::e_wusi)
{
    ui->setupUi(this);
}

e_wusi::~e_wusi()
{
    delete ui;
}

void e_wusi::on_pushButton_clicked()
{
    mapdialog* m=new mapdialog;
    this->close();
    m->show();
}

