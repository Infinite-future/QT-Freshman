#include "timedialog.h"
#include "ui_timedialog.h"
#include"liaojiexuexiaodialog.h"
timeDialog::timeDialog(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::timeDialog)
{
    ui->setupUi(this);
}

timeDialog::~timeDialog()
{
    delete ui;
}

void timeDialog::on_timepb1_clicked()
{
    this ->close();
    liaojiexuexiaoDialog * ljxx   = new liaojiexuexiaoDialog(this);
    ljxx  -> show();
}

