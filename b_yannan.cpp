#include "b_yannan.h"
#include "ui_b_yannan.h"

b_yannan::b_yannan(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::b_yannan)
{
    ui->setupUi(this);
}

b_yannan::~b_yannan()
{
    delete ui;
}
