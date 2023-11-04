#ifndef __SHAPE_H__
#define __SHAPE_H__

class Shape
{
public:
    Shape(double width, double height);

    virtual double getArea() = 0;

protected:
    double width, height;
};

class Triangle : public Shape
{
public:
    Triangle(double width, double height) : Shape(width, height) {
        this->width = width;
        this->height = height;
    }
    double getArea();
};

class Rectangle : public Shape
{
public:
    Rectangle(double width, double height) : Shape(width, height) {
        this->width = width;
        this->height = height;
    }
    double getArea();
};

#endif //__SHAPE_H__