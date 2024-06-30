#include "a_wenshi.h"
#include "ui_a_wenshi.h"
#include"mapdialog.h"
a_wenshi::a_wenshi(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::a_wenshi)
{
    ui->setupUi(this);
}

a_wenshi::~a_wenshi()
{
    delete ui;
}

void a_wenshi::on_pushButton_clicked()
{
    mapdialog* m=new mapdialog;
    this->close();
    m->show();
}

