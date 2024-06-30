#include "picture2dialog.h"
#include "ui_picture2dialog.h"

picture2Dialog::picture2Dialog(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::picture2Dialog)
{
    ui->setupUi(this);
}

picture2Dialog::~picture2Dialog()
{
    delete ui;
}
#include"xiaoneifengjingdialog.h"
void picture2Dialog::on_pushButton_clicked()
{
    this -> close();
    xiaoneifengjingDialog * t = new xiaoneifengjingDialog();
    t -> show();
}

