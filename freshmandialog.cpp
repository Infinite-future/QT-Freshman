#include "freshmandialog.h"
#include "ui_freshmandialog.h"
#include"mapdialog.h"
#include"newdialog.h"
FreshmanDialog::FreshmanDialog(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::FreshmanDialog)
{
    ui->setupUi(this);
}

FreshmanDialog::~FreshmanDialog()
{
    delete ui;
}





void FreshmanDialog::on_pb1_clicked()
{
    this ->close();
    mapdialog * mapDialog = new mapdialog(this);
    mapDialog -> show();
}
void FreshmanDialog::paintEvent(QPaintEvent *event)
{
    QPainter painter(this);
    painter.drawPixmap(0,0,width(),height(),QPixmap(":/door/door1.png"));
}

void FreshmanDialog::on_pb2_clicked()
{
    this ->close();
    newdialog * newDialog = new newdialog(this);
    newDialog -> show();
}


void FreshmanDialog::on_pb3_clicked()
{
    this ->close();
}

