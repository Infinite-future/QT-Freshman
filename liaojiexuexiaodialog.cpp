#include "liaojiexuexiaodialog.h"
#include "ui_liaojiexuexiaodialog.h"
#include  "timedialog.h"
#include"newdialog.h"
#include"QLabel"
#include"shitangchaoshidialog.h"
#include"xiaoneifengjingdialog.h"
#include"shenghuofuwudialog.h"
liaojiexuexiaoDialog::liaojiexuexiaoDialog(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::liaojiexuexiaoDialog)
{
    ui->setupUi(this);
}

liaojiexuexiaoDialog::~liaojiexuexiaoDialog()
{
    delete ui;
}

void liaojiexuexiaoDialog::on_shijianbiao_clicked()
{
    this ->close();
    timeDialog * T = new timeDialog(this);
    T -> show();
}


void liaojiexuexiaoDialog::on_ljxxpb5_clicked()
{
    this->close();
    newdialog *newDialog = new newdialog();
    newDialog->show();
}


void liaojiexuexiaoDialog::on_ljxxpb2_clicked()
{
    this ->close();
    shitangchaoshiDialog * stcs = new shitangchaoshiDialog();
    stcs ->show();
}


void liaojiexuexiaoDialog::on_ljxxpb3_clicked()
{
    this->close();
    xiaoneifengjingDialog *xnfj = new xiaoneifengjingDialog();
    xnfj -> show();
}


void liaojiexuexiaoDialog::on_ljxxpb4_clicked()
{
    this->close();
    shenghuofuwuDialog *shfw = new shenghuofuwuDialog();
    shfw -> show();
}

