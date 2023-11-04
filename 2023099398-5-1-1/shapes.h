#ifndef __SHAPE_H__
#define __SHAPE_H__

#include <cmath>

class Canvas {
    public:
        Canvas(const size_t row, const size_t col);
        ~Canvas();

        bool DrawPixel(const int x, const int y, const char brush);

        void Print() const;
        void Clear();

    private:
        size_t row;
        size_t col;
        char **canvas;
};

class Shape {
    public:
        Shape();
        Shape(const size_t x, const size_t y, const char brush);

        double GetArea();
        int GetPerimeter();
        void Draw(Canvas *canvas) const {};

    protected:
        size_t x;
        size_t y;
        size_t width; //갸로
        size_t height; //세로
        char brush;
};

class Square : public Shape {
    public:
        Square() : Shape() {};
        Square(const size_t x, const size_t y, const char brush) : Shape(x, y, brush) {};

        void get_x_y_width_height_brush (size_t a, size_t c, size_t d, char e);
        double GetArea();
        int GetPerimeter();
        void Draw(Canvas *canvas);
};

class Rectangle : public Shape {
    public:
        Rectangle() : Shape() {};
        Rectangle(const size_t x, const size_t y, const char brush) : Shape(x, y, brush) {};

        void get_x_y_width_height_brush (size_t a, size_t b, size_t c, size_t d, char e);
        double GetArea();
        int GetPerimeter();
        void Draw(Canvas *canvas);
};

#endif // __SHAPE_H__