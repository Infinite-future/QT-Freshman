#include "a_liyi.h"
#include "ui_a_liyi.h"
#include"mapdialog.h"
a_liyi::a_liyi(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::a_liyi)
{
    ui->setupUi(this);
}

a_liyi::~a_liyi()
{
    delete ui;
}

void a_liyi::on_pushButton_clicked()
{
    mapdialog* m=new mapdialog;
    this->close();
    m->show();
}

