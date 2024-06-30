#include "newdialog.h"
#include "ui_newdialog.h"
#include"freshmandialog.h"
#include"liaojiexuexiaodialog.h"
#include"QWizardPage"
newdialog::newdialog(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::newdialog)
{
    ui->setupUi(this);
}

newdialog::~newdialog()
{
    delete ui;
}

void newdialog::on_newpb1_clicked()
{
    this->close();
    FreshmanDialog *father = new FreshmanDialog();
    father -> show();
}
QWizardPage * newdialog :: createPage1()  // 向导页面1
{
    QWizardPage *page = new QWizardPage;
    page->setTitle(tr("有一个人，他叫小帅，他终于考上了梦寐以求的北京大学，明天他就要入学了"));
    return page;
}
QWizardPage * newdialog::createPage2()  // 向导页面2
{
    QWizardPage *page = new QWizardPage;
    page->setTitle(tr("想到明天和家人一起报道，他内心充满了欢乐，可是他想到，家人进入学校要预约，他赶忙赶急去北京大学门户学生预约访客里预约"));
    return page;
}
QWizardPage * newdialog::createPage3()  // 向导页面3
{
    QWizardPage *page = new QWizardPage;
    page->setTitle(tr("到了报到当天，小帅不想打车来学校，于是他乘坐地铁4号线到北京大学东门站下车，从东南门进入。9点左右到了学校"));
    return page;
}
QWizardPage * newdialog::createPage4()  // 向导页面3
{
    QWizardPage *page = new QWizardPage;
    page->setTitle(tr("一进门，发现好多志愿者，他不想把行李给家人保管，于是把行李给了志愿者，然后自己拿着取通知书前往邱德拔体育馆报到领取校园卡和钥匙"));
    return page;
}
QWizardPage * newdialog::createPage5()  // 向导页面3
{
    QWizardPage *page = new QWizardPage;
    page->setTitle(tr("拿到校园卡和钥匙后，小帅和家人一起找到寝室，放好行李。然后用自带的毛巾（抹布）擦衣柜桌子床板等。"));
    return page;
}
QWizardPage * newdialog::createPage6()  // 向导页面3
{
    QWizardPage *page = new QWizardPage;
    page->setTitle(tr("小帅收拾整理完后，和家人一起欣赏北大校园的风光，顺便买了生活用品，小帅的一天就这样过去了"));
    return page;
}
QWizardPage * newdialog::createPage7()  // 向导页面3
{
    QWizardPage *page = new QWizardPage;
    page->setTitle(tr("入学模拟结束，欢迎来到北大"));
    return page;
}
void newdialog::on_newpb3_clicked()
{
    this ->close();
    liaojiexuexiaoDialog * ljxx = new liaojiexuexiaoDialog(this);
    ljxx -> show();
}


void newdialog::on_newpb2_clicked()
{
    QWizard wizard(this);
    wizard.setWindowTitle(tr("入学模拟"));
    wizard.addPage(createPage1());     // 添加向导页面
    wizard.addPage(createPage2());
    wizard.addPage(createPage3());
    wizard.addPage(createPage4());
    wizard.addPage(createPage5());
    wizard.addPage(createPage6());
    wizard.addPage(createPage7());

    wizard.exec();
}

