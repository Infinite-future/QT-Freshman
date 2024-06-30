#include "b_jiayuan.h"
#include "ui_b_jiayuan.h"

b_jiayuan::b_jiayuan(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::b_jiayuan)
{
    ui->setupUi(this);
}

b_jiayuan::~b_jiayuan()
{
    delete ui;
}
