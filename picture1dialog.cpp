#include "picture1dialog.h"
#include "ui_picture1dialog.h"
#include"xiaoneifengjingdialog.h"
picture1Dialog::picture1Dialog(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::picture1Dialog)
{
    ui->setupUi(this);
}

picture1Dialog::~picture1Dialog()
{
    delete ui;
}

void picture1Dialog::on_pushButton_clicked()
{
    this -> close();
    xiaoneifengjingDialog * t = new xiaoneifengjingDialog();
    t -> show();
}

