#include "xiaoneifengjingdialog.h"
#include "ui_xiaoneifengjingdialog.h"
#include"liaojiexuexiaodialog.h"
#include"picture1dialog.h"
#include"picture2dialog.h"
#include"picture3dialog.h"
#include"picture4dialog.h"
#include"picture5dialog.h"
#include"picture6dialog.h"
#include"picture7dialog.h"
#include"picture8dialog.h"
#include"picture9dialog.h"
#include"picture10dialog.h"
xiaoneifengjingDialog::xiaoneifengjingDialog(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::xiaoneifengjingDialog)
{
    ui->setupUi(this);
}

xiaoneifengjingDialog::~xiaoneifengjingDialog()
{
    delete ui;
}

void xiaoneifengjingDialog::on_xnfwpb1_clicked()
{
    this -> close();
    liaojiexuexiaoDialog * ljxx = new liaojiexuexiaoDialog();
    ljxx-> show();
}


void xiaoneifengjingDialog::on_xnfwpb2_clicked()
{
    this->close();
}


void xiaoneifengjingDialog::on_pb1_clicked()
{
    this ->close();
    picture1Dialog * P1 = new picture1Dialog();
    P1 -> show();
}
void xiaoneifengjingDialog::on_pb2_clicked()
{
    this ->close();
    picture2Dialog * P2 = new picture2Dialog();
    P2 -> show();
}


void xiaoneifengjingDialog::on_pb3_clicked()
{
    this ->close();
    picture3Dialog * P3 = new picture3Dialog();
    P3 -> show();
}


void xiaoneifengjingDialog::on_pb4_clicked()
{
    this ->close();
    picture4Dialog * P4 = new picture4Dialog();
    P4 -> show();
}


void xiaoneifengjingDialog::on_pb5_clicked()
{
    this ->close();
    picture5Dialog * P5 = new picture5Dialog();
    P5 -> show();
}


void xiaoneifengjingDialog::on_pb6_clicked()
{
    this ->close();
    picture6Dialog * P6 = new picture6Dialog();
    P6 -> show();
}


void xiaoneifengjingDialog::on_pb7_clicked()
{
    this ->close();
    picture7Dialog * P7 = new picture7Dialog();
    P7 -> show();
}


void xiaoneifengjingDialog::on_pb8_clicked()
{
    this ->close();
    picture8Dialog * P8 = new picture8Dialog();
    P8 -> show();
}


void xiaoneifengjingDialog::on_pb9_clicked()
{
    this ->close();
    picture9Dialog * P9 = new picture9Dialog();
    P9 -> show();
}


void xiaoneifengjingDialog::on_pb10_clicked()
{
    this ->close();
    picture10Dialog * P10 = new picture10Dialog();
    P10 -> show();
}




