#ifndef __SHAPES_H__
#define __SHAPES_H__

class Shape {
    public:
        Shape(double a, double b);
        virtual double getArea() = 0;

    private:
        double width;
        double height;

};

class Triangle : public Shape {
    public:
        Triangle(double a, double b);
        virtual double getArea();
    private:
        double width;
        double height;
};

class Rectangle : public Shape {
    public:
        Rectangle(double a, double b);
        virtual double getArea();
    private:
        double width;
        double height;
};

#endif //__SHAPES_H__