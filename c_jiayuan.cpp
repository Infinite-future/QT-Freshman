#include "c_jiayuan.h"
#include "ui_c_jiayuan.h"

c_jiayuan::c_jiayuan(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::c_jiayuan)
{
    ui->setupUi(this);
}

c_jiayuan::~c_jiayuan()
{
    delete ui;
}
