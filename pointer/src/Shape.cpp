#include "Shape.h"

Shape::Shape(int x, int y)
{
    width = x;
    height = y;
}

Shape::Shape()
{
    width = 1;
    height = 1;
}

Shape::~Shape()
{
    //dtor
}

int Shape::area(void)
{
return width*height;
}

void Shape::set_values(int x, int y)
{
width = x;
height = y;
}
