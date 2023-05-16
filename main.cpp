#include "mainwindow.h"
#include <QApplication>
#include "win.h"
int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    Win win(0); // создание объекта управления окном
       win.show(); // визуплизация окна

    return a.exec();
}
