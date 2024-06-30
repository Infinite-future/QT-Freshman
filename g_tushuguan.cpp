#include "g_tushuguan.h"
#include "ui_g_tushuguan.h"
#include"mapdialog.h"
g_tushuguan::g_tushuguan(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::g_tushuguan)
{
    ui->setupUi(this);
}

g_tushuguan::~g_tushuguan()
{
    delete ui;
}

void g_tushuguan::on_pushButton_clicked()
{
    mapdialog* m=new mapdialog;
    this->close();
    m->show();
}

