#include "e_erti.h"
#include "ui_e_erti.h"
#include"mapdialog.h"
e_erti::e_erti(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::e_erti)
{
    ui->setupUi(this);
}

e_erti::~e_erti()
{
    delete ui;
}

void e_erti::on_pushButton_clicked()
{
    mapdialog* m=new mapdialog;
    this->close();
    m->show();
}

