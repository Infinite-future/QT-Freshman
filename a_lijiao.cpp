#include "a_lijiao.h"
#include "ui_a_lijiao.h"
#include"mapdialog.h"
a_lijiao::a_lijiao(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::a_lijiao)
{
    ui->setupUi(this);
}

a_lijiao::~a_lijiao()
{
    delete ui;
}

void a_lijiao::on_pushButton_clicked()
{
    mapdialog* m=new mapdialog;
    this->close();
    m->show();
}

