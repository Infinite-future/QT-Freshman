#include "shitangchaoshidialog.h"
#include "ui_shitangchaoshidialog.h"
#include "liaojiexuexiaodialog.h"
#include"qpushbutton.h"

shitangchaoshiDialog::shitangchaoshiDialog(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::shitangchaoshiDialog)
{
    ui->setupUi(this);
}

shitangchaoshiDialog::~shitangchaoshiDialog()
{
    delete ui;
}

void shitangchaoshiDialog::on_stcspb1_clicked()
{
    this -> close();
    liaojiexuexiaoDialog * ljxx = new liaojiexuexiaoDialog();
    ljxx-> show();
}
void shitangchaoshiDialog::on_stcspb2_clicked()
{
    this -> close();
}

