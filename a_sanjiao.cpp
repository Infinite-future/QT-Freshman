#include "a_sanjiao.h"
#include "ui_a_sanjiao.h"
#include"mapdialog.h"
a_sanjiao::a_sanjiao(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::a_sanjiao)
{
    ui->setupUi(this);
}

a_sanjiao::~a_sanjiao()
{
    delete ui;
}

void a_sanjiao::on_pushButton_clicked()
{
    mapdialog* m=new mapdialog;
    this->close();
    m->show();
}

