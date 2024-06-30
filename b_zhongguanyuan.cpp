#include "b_zhongguanyuan.h"
#include "ui_b_zhongguanyuan.h"

b_zhongguanyuan::b_zhongguanyuan(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::b_zhongguanyuan)
{
    ui->setupUi(this);
}

b_zhongguanyuan::~b_zhongguanyuan()
{
    delete ui;
}
