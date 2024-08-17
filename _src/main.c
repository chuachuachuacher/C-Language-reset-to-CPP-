#include <stdio.h>
#include "..\_lib\Shape.h"

int main(){
    
    Shape s1 = {
    .x=0,
    .y=0,
    .conS=constructor, 
    .getX=getter_X,
    .getY=getter_Y, 
    .setX=setter_X, 
    .setY=setter_Y
    };
    s1.conS(&s1, 10, 20);
    printf("Shape 1: x = %d, y = %d\n", s1.getX(&s1), s1.getY(&s1));

    return 0;
}