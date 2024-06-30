#include "freshmandialog.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    FreshmanDialog w;
    w.show();
    return a.exec();
}
