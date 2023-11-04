#include "shapes.h"
#include <iostream>

Shape::Shape(double a, double b){
    width = a;
    height = b;
}

Triangle::Triangle(double a, double b) : Shape(a, b) {
    width = a;
    height = b;
}

double Triangle::getArea(){
    return (0.5)*width*height;
}

Rectangle::Rectangle(double a, double b) : Shape(a, b) {
    width = a;
    height = b;
}

double Rectangle::getArea(){
    return width*height;
}