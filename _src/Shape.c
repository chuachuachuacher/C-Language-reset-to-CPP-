#include "..\_lib\Shape.h"

// 函数接口实现
void constructor(Shape* const me, int x, int y){
    me->x = x;
    me->y = y;
}

int getter_X(const Shape* const me){
    return me->x;
}

int getter_Y(const Shape* const me){
    return me->y;
}

void setter_X(Shape* const me, int x){
    me->x = x;
}

void setter_Y(Shape* const me, int y){
    me->y = y;
}

