#include "figura.h"


#include <math.h>

void Figura::move(float Alpha,QPainter *Painter)
{
    dx=halflen*cos(Alpha);
    dy=halflen*sin(Alpha);
    draw(Painter);
}
