#include "b_songlin.h"
#include "ui_b_songlin.h"

b_songlin::b_songlin(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::b_songlin)
{
    ui->setupUi(this);
}

b_songlin::~b_songlin()
{
    delete ui;
}
