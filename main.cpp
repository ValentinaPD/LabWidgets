#include "mainwindow.h"
#include <QApplication>
#include <QtGui>
#include <QLabel>
int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    w.setWindowTitle("Hello");
    QLabel *helloLabel = new QLabel("Hello",&w);
    w.show();

    return a.exec();
}
