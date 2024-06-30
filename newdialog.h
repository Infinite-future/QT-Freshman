#ifndef NEWDIALOG_H
#define NEWDIALOG_H
#include<qlabel.h>
#include <QDialog>
#include<QWizardPage>
namespace Ui {
class newdialog;
}

class newdialog : public QDialog
{
    Q_OBJECT

public:
    explicit newdialog(QWidget *parent = nullptr);
    ~newdialog();

private slots:
    void on_newpb1_clicked();

    void on_newpb3_clicked();

    void on_newpb2_clicked();

private:
    Ui::newdialog *ui;
    QWizardPage *createPage1();
    QWizardPage *createPage2();
    QWizardPage *createPage3();
    QWizardPage *createPage4();
    QWizardPage *createPage5();
    QWizardPage *createPage6();
    QWizardPage *createPage7();
};

#endif // NEWDIALOG_H
