#ifndef MYRECT_H
#define MYRECT_H
#include "figura.h"

class MyRect:public Figura
{
protected:
    void draw(QPainter *Painter);
public:
    MyRect(int x,int y,int halflen):Figura(x,y,halflen){}
};

#endif // MYRECT_H
