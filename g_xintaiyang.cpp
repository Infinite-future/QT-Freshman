#include "g_xintaiyang.h"
#include "ui_g_xintaiyang.h"
#include"mapdialog.h"
g_xintaiyang::g_xintaiyang(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::g_xintaiyang)
{
    ui->setupUi(this);
}

g_xintaiyang::~g_xintaiyang()
{
    delete ui;
}

void g_xintaiyang::on_pushButton_clicked()
{
    mapdialog* m=new mapdialog;
    this->close();
    m->show();
}

