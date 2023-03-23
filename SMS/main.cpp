#include "mainwindow.h"
#include "db.h"
#include <QApplication>
DB db;
int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    w.show();
    return a.exec();
}
