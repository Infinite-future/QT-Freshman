#include "ruxuedialog.h"
#include "ui_ruxuedialog.h"

ruxueDialog::ruxueDialog(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::ruxueDialog)
{
    ui->setupUi(this);
}

ruxueDialog::~ruxueDialog()
{
    delete ui;
}
