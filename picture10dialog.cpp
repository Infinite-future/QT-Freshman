#include "picture10dialog.h"
#include "ui_picture10dialog.h"

picture10Dialog::picture10Dialog(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::picture10Dialog)
{
    ui->setupUi(this);
}

picture10Dialog::~picture10Dialog()
{
    delete ui;
}
#include"xiaoneifengjingdialog.h"
void picture10Dialog::on_pushButton_clicked()
{
    this -> close();
    xiaoneifengjingDialog * t = new xiaoneifengjingDialog();
    t -> show();
}
