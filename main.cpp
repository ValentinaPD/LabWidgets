#include "mainwindow.h"
#include <QApplication>
#include <QtGui>
#include <QLabel>
#include "win.h"
int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    Win win(0); //схдание объекта управления окном
    win.show();

    return a.exec();
}
