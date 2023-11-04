#include "shapes.h"
#include <iostream>

// class Shape
Shape::Shape(double width, double height){
    this->width = width;
    this->height = height;
}

// class Triangle
double Triangle::getArea(){
    return (0.5)*(width)*(height);
}

// class Ractangle
double Rectangle::getArea(){
    return (width)*(height);
}