#ifndef __SHAPE_H__
#define __SHAPE_H__

#include <cmath>

class Canvas {
    public:
        Canvas(const size_t row, const size_t col);
        ~Canvas();

        void Resize(const size_t row, const size_t col);

        bool DrawPixel(const int x, const int y, const char brush);

        void Print() const;
        void Clear();

    private:
        size_t row, col;
        char **canvas;
};

class Shape {
    public:
        Shape(){};
        Shape(const size_t x, const size_t y, const char brush){
            this->x = x;
            this->y = y;
            this->brush = brush;
        };

        virtual void Draw(Canvas *canvas) const = 0;
        virtual void printInfo() const = 0;

    protected:
        size_t x, y;
        char brush;
};

class Rectangle : public Shape {
    public:
        Rectangle() : Shape(){};
        Rectangle(const size_t x, const size_t y, const char brush) : Shape(x, y, brush) {};
        void Draw(Canvas *canvas) const;
        void printInfo() const;
        void setMemberVariable(size_t a, size_t b, size_t c, size_t d, char e);

    private:
        size_t width;
        size_t height;
};

class UpTriangle : public Shape {
    public:
        UpTriangle() : Shape(){};
        UpTriangle(const size_t x, const size_t y, const char brush) : Shape(x, y, brush) {};
        void Draw(Canvas *canvas) const;
        void printInfo() const;
        void setMemberVariable(size_t a, size_t b, size_t c, char e);

    private:
        size_t height;
};

class DownTriangle : public Shape {
    public:
        DownTriangle() : Shape(){};
        DownTriangle(const size_t x, const size_t y, const char brush) : Shape(x, y, brush) {};
        void Draw(Canvas *canvas) const;
        void printInfo() const;
        void setMemberVariable(size_t a, size_t b, size_t c, char e);

    private:
        size_t height;
};

class Diamond : public Shape {
    public:
        Diamond() : Shape(){};
        Diamond(const size_t x, const size_t y, const char brush) : Shape(x, y, brush) {};
        void Draw(Canvas *canvas) const;
        void printInfo() const;
        void setMemberVariable(size_t a, size_t b, size_t c, char e);

    private:
        size_t distance;
};

#endif // __SHAPE_H__