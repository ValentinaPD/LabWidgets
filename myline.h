#ifndef MYLINE_H
#define MYLINE_H
#include "figura.h"

class MyLine:public Figura
{
protected:
    void draw(QPainter *Painter);
public:
    MyLine(int x,int y,int halflen):Figura(x,y,halflen){}
};

#endif // MYLINE_H
