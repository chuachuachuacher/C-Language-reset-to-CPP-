/**
 * 
 * 声明Shape类的基本属性、和函数接口
 * 
 */
#ifndef SHAPE_H
#define SHAPE_H
// 声明
typedef struct ShapeClass{
    int x;
    int y;
    void (*conS)(struct ShapeClass* const, int, int);
    
    int (*getX)(const struct ShapeClass* const);
    int (*getY)(const struct ShapeClass* const);
    
    void (*setX)(struct ShapeClass* const, int);
    void (*setY)(struct ShapeClass* const, int);
} Shape;

// 成员函数接口
void constructor(Shape* const me, int x, int y);

int getter_X(const Shape* const me);
void setter_X(Shape* const me, int x);

int getter_Y(const Shape* const me);
void setter_Y(Shape* const me, int y);

#endif