#ifndef FIGURA_H
#define FIGURA_H
#include <QtGui>

class Figura
{
protected:
    int x,y,halflen,dx,dy,r;
    virtual void draw(QPainter *Painter) = 0;
public:
    Figura(int X,int Y,int Halflen):x(X),y(Y),halflen(Halflen){}
    void move(float Alpha,QPainter *Painter);
};

#endif // FIGURA_H
