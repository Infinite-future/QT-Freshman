#include "a_sijiao.h"
#include "ui_a_sijiao.h"
#include"mapdialog.h"
a_sijiao::a_sijiao(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::a_sijiao)
{
    ui->setupUi(this);
}

a_sijiao::~a_sijiao()
{
    delete ui;
}

void a_sijiao::on_pushButton_clicked()
{
    mapdialog* m=new mapdialog;
    this->close();
    m->show();
}

