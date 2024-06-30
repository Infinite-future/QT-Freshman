#include "g_yanyuandasha.h"
#include "ui_g_yanyuandasha.h"

g_yanyuandasha::g_yanyuandasha(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::g_yanyuandasha)
{
    ui->setupUi(this);
}

g_yanyuandasha::~g_yanyuandasha()
{
    delete ui;
}
