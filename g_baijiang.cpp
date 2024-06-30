#include "g_baijiang.h"
#include "ui_g_baijiang.h"
#include"mapdialog.h"
g_baijiang::g_baijiang(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::g_baijiang)
{
    ui->setupUi(this);
}

g_baijiang::~g_baijiang()
{
    delete ui;
}

void g_baijiang::on_pushButton_clicked()
{
    mapdialog* m=new mapdialog;
    this->close();
    m->show();
}

