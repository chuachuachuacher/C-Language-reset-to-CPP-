#ifndef RECTANGLE_H
#define RECTANGLE_H

#include "Shape.h"

typedef struct RectangleClass{
    
    Shape base;
    double width;
    double height;
    void (*conS)(struct RectangleClass* const me, int, int, double, double);

}Rectangle;

void Rec_conS(Rectangle* const me, int x, int y, double width, double height);

#endif