#ifndef WIN_H
#define WIN_H
#include <QtGui>
#include <QWidget>
#include <QPushButton>
#include "area.h"
#include <QVBoxLayout>


class Win: public QWidget
{
protected:
    QTextCodec *codec;
    Area * area; // область отображения рисунка
    QPushButton * btn;
public:
    Win();
};

#endif // WIN_H
