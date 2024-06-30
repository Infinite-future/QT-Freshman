#include "mapdialog.h"
#include "ui_mapdialog.h"
#include"freshmandialog.h"//"
#include<QPaintEvent>
#include"a_erjiao.h"
#include"a_lijiao.h"
#include"a_liyi.h"
#include"a_sanjiao.h"
#include"a_sijiao.h"
#include"a_wenshi.h"
#include"a_yijiao.h"
#include"d_dongcemen.h"
#include"d_dongmen.h"
#include"d_dongnanmen.h"
#include"d_nanmen.h"
#include"d_xicemen.h"
#include"d_ximen.h"
#include"e_erti.h"
#include"e_qiudeba.h"
#include"e_wusi.h"
#include"e_wusiyumaoqiu.h"
#include"e_yiti.h"
#include"g_baijiang.h"
#include"g_tushuguan.h"
#include"g_xintaiyang.h"
mapdialog::mapdialog(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::mapdialog)
{
    ui->setupUi(this);
}

mapdialog::~mapdialog()
{
    delete ui;
}

void mapdialog::on_mappb1_clicked()
{
    FreshmanDialog * father = new FreshmanDialog();
    this ->close();
    father ->show();
}

void mapdialog::paintEvent(QPaintEvent* event)
{
    ui->mappb1->move(0,0);
    ui->pushButton->move(this->width()*510/800,this->height()*340/600);
    ui->pushButton_2->move(this->width()*510/800,this->height()*380/600);
    ui->pushButton_3->move(this->width()*440/800,this->height()*280/600);
    ui->pushButton_4->move(this->width()*480/800,this->height()*310/600);
    ui->pushButton_5->move(this->width()*510/800,this->height()*400/600);
    ui->pushButton_6->move(this->width()*540/800,this->height()*440/600);
    ui->pushButton_7->move(this->width()*550/800,this->height()*420/600);
    ui->pushButton_15->move(this->width()*470/800,this->height()*190/600);
    ui->pushButton_16->move(this->width()*370/800,this->height()*370/600);
    ui->pushButton_17->move(this->width()*560/800,this->height()*450/600);
    ui->pushButton_18->move(this->width()*520/800,this->height()*480/600);
    ui->pushButton_19->move(this->width()*480/800,this->height()*500/600);
    ui->pushButton_26->move(this->width()*270/800,this->height()*210/600);
    ui->pushButton_27->move(this->width()*580/800,this->height()*270/600);
    ui->pushButton_28->move(this->width()*270/800,this->height()*280/600);
    ui->pushButton_29->move(this->width()*470/800,this->height()*520/600);
    ui->pushButton_30->move(this->width()*580/800,this->height()*310/600);
    ui->pushButton_31->move(this->width()*580/800,this->height()*380/600);
    ui->pushButton_44->move(this->width()*420/800,this->height()*310/600);
    ui->pushButton_45->move(this->width()*420/800+20,this->height()*390/600);
    ui->pushButton_46->move(this->width()*450/800,this->height()*430/600);
    ui->pushButton_50->move(40,0);
}

void mapdialog::on_pushButton_50_clicked(){
    QString a=ui->pushButton_50->text();
    if(a=="关闭地图钉"){
    ui->pushButton_50->setText("开启地图钉");
    ui->pushButton->setVisible(false);
    ui->pushButton_2->setVisible(false);
    ui->pushButton_3->setVisible(false);
    ui->pushButton_4->setVisible(false);
    ui->pushButton_5->setVisible(false);
    ui->pushButton_6->setVisible(false);
    ui->pushButton_7->setVisible(false);
    ui->pushButton_15->setVisible(false);
    ui->pushButton_16->setVisible(false);
    ui->pushButton_17->setVisible(false);
    ui->pushButton_18->setVisible(false);
    ui->pushButton_19->setVisible(false);
    ui->pushButton_26->setVisible(false);
    ui->pushButton_27->setVisible(false);
    ui->pushButton_28->setVisible(false);
    ui->pushButton_29->setVisible(false);
    ui->pushButton_30->setVisible(false);
    ui->pushButton_31->setVisible(false);
    ui->pushButton_44->setVisible(false);
    ui->pushButton_45->setVisible(false);
    ui->pushButton_46->setVisible(false);
    }
    else{
        ui->pushButton_50->setText("关闭地图钉");
        ui->pushButton->setVisible(true);
        ui->pushButton_2->setVisible(true);
        ui->pushButton_3->setVisible(true);
        ui->pushButton_4->setVisible(true);
        ui->pushButton_5->setVisible(true);
        ui->pushButton_6->setVisible(true);
        ui->pushButton_7->setVisible(true);
        ui->pushButton_15->setVisible(true);
        ui->pushButton_16->setVisible(true);
        ui->pushButton_17->setVisible(true);
        ui->pushButton_18->setVisible(true);
        ui->pushButton_19->setVisible(true);
        ui->pushButton_26->setVisible(true);
        ui->pushButton_27->setVisible(true);
        ui->pushButton_28->setVisible(true);
        ui->pushButton_29->setVisible(true);
        ui->pushButton_30->setVisible(true);
        ui->pushButton_31->setVisible(true);
        ui->pushButton_44->setVisible(true);
        ui->pushButton_45->setVisible(true);
        ui->pushButton_46->setVisible(true);
    }
}





void mapdialog::on_pushButton_clicked()
{
    a_lijiao* p1=new a_lijiao;
    this->close();
    p1->show();
}





void mapdialog::on_pushButton_2_clicked()
{
    a_liyi* p2=new a_liyi;
    this->close();
    p2->show();
}


void mapdialog::on_pushButton_5_clicked()
{
    A_erjiao* p3=new A_erjiao;
    this->close();
    p3->show();
}


void mapdialog::on_pushButton_6_clicked()
{
    a_sanjiao* p4=new a_sanjiao;
    this->close();
    p4->show();
}


void mapdialog::on_pushButton_7_clicked()
{
    a_sijiao* p5=new a_sijiao;
    this->close();
    p5->show();
}


void mapdialog::on_pushButton_3_clicked()
{
    A_yijiao* p6=new A_yijiao;
    this->close();
    p6->show();
}


void mapdialog::on_pushButton_4_clicked()
{
    a_wenshi* p7=new a_wenshi;
    this->close();
    p7->show();
}


void mapdialog::on_pushButton_15_clicked()
{
    e_yiti* p8=new e_yiti;
    this->close();
    p8->show();
}


void mapdialog::on_pushButton_16_clicked()
{
    e_erti* p9=new e_erti;
    this->close();
    p9->show();
}


void mapdialog::on_pushButton_19_clicked()
{
    e_wusiyumaoqiu* p10=new e_wusiyumaoqiu;
    this->close();
    p10->show();
}


void mapdialog::on_pushButton_18_clicked()
{
    e_wusi* p11=new e_wusi;
    this->close();
    p11->show();
}


void mapdialog::on_pushButton_17_clicked()
{
    e_qiudeba* p12=new e_qiudeba;
    this->close();
    p12->show();
}



void mapdialog::on_pushButton_26_clicked()
{
    d_ximen* p13=new d_ximen;
    this->close();
    p13->show();
}


void mapdialog::on_pushButton_28_clicked()
{
    d_xicemen* p14=new d_xicemen;
    this->close();
    p14->show();
}


void mapdialog::on_pushButton_29_clicked()
{
    d_nanmen* p15=new d_nanmen;
    this->close();
    p15->show();
}


void mapdialog::on_pushButton_31_clicked()
{
    d_dongnanmen* p16=new d_dongnanmen;
    this->close();
    p16->show();
}


void mapdialog::on_pushButton_30_clicked()
{
    d_dongmen* p17=new d_dongmen;
    this->close();
    p17->show();
}


void mapdialog::on_pushButton_27_clicked()
{
    d_dongcemen* p18=new d_dongcemen;
    this->close();
    p18->show();
}


void mapdialog::on_pushButton_44_clicked()
{
    g_tushuguan* p19=new g_tushuguan;
    this->close();
    p19->show();
}


void mapdialog::on_pushButton_45_clicked()
{
    g_baijiang* p21=new g_baijiang;
    this->close();
    p21->show();
}


void mapdialog::on_pushButton_46_clicked()
{
    g_xintaiyang* p20=new g_xintaiyang;
    this->close();
    p20->show();
}

