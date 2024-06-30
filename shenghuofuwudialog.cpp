#include "shenghuofuwudialog.h"
#include "ui_shenghuofuwudialog.h"
#include"liaojiexuexiaodialog.h"
shenghuofuwuDialog::shenghuofuwuDialog(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::shenghuofuwuDialog)
{
    ui->setupUi(this);
}

shenghuofuwuDialog::~shenghuofuwuDialog()
{
    delete ui;
}

void shenghuofuwuDialog::on_shfwpb1_clicked()
{
    this -> close();
    liaojiexuexiaoDialog * ljxx = new liaojiexuexiaoDialog();
    ljxx-> show();
}


void shenghuofuwuDialog::on_shfwpb2_clicked()
{
    this -> close();
}

