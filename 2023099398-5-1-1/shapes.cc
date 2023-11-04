#include <iostream>
#include "shapes.h"
using namespace std;

static char **init(char **matrix, const size_t row, const size_t col) {
    for(int i=0; i<row; ++i){
        for(int j=0; j<col; ++j){
            matrix[i][j] = '.';
        }
    }
    return matrix;
}

static char **auto_alloc(const size_t row, const size_t col){
    char **matrix = new char*[row];
    for(int i=0; i<row; ++i){
        matrix[i] = new char[col];
    }
    matrix = init(matrix, row, col);

    return matrix;
}

static void auto_delete(char **matrix, const size_t row, const size_t col){
    for(int i=0; i<row; ++i){
        delete[] matrix[i];
    }
    delete[] matrix;
}

// Canvas member function
Canvas::Canvas(const size_t row, const size_t col){
    this->row = row;
    this->col = col;
    this->canvas = auto_alloc(this->row, this->col);
    this->canvas = init(this->canvas, this->row, this->col);
}
Canvas::~Canvas(){
    auto_delete(this->canvas, this->row, this->col);
}

void Canvas::Print() const {
    cout << " ";
    for(int i=0; i<this->col; ++i){
        cout << (i);
    }
    cout << endl;

    for(int i=0; i<this->row; ++i){
        cout << (i);
        for(int j=0; j<this->col; ++j){
            cout << this->canvas[i][j];
        }
        cout << endl;
    }
}

void Canvas::Clear() {
    this->canvas = init(this->canvas, this->row, this->col);
}

bool Canvas::DrawPixel(const int x, const int y, const char brush){
    if(x<0 || x>=this->col || y<0 || y>=this->row){
        return false;
    }
    this->canvas[y][x] = brush;
    return true;
}

// Shape member function
Shape::Shape(const size_t x, const size_t y, const char brush){

};
Shape::Shape(){

};

double Shape::GetArea(){
    size_t area = (this->height) * (this->width);
    return area;
}
int Shape::GetPerimeter(){
    size_t perimeter = 2*(this->height) + 2*(this->width);
    return perimeter;
}


// Square member function
void Square::get_x_y_width_height_brush (size_t a, size_t b, size_t c, char e){
            x = a;
            y = b;
            width = c;
            height = c;
            brush = e;
}

double Square::GetArea(){
    size_t area = (this->height) * (this->width);
    return area;
}
int Square::GetPerimeter(){
    size_t perimeter = 2*(this->height) + 2*(this->width);
    return perimeter;
}
void Square::Draw(Canvas *canvas){
    for(int i=y; i<y+height; i++){
        for(int j=x; j<x+width; j++){
            if(canvas->DrawPixel(j, i, brush)==false){
                break;
            }
        }
    }
}


// Rectangle member function
void Rectangle::get_x_y_width_height_brush (size_t a, size_t b, size_t c, size_t d, char e){
            x = a;
            y = b;
            width = c;
            height = d;
            brush = e;
}
double Rectangle::GetArea(){
    size_t area = (this->height) * (this->width);
    return area;
}
int Rectangle::GetPerimeter(){
    size_t perimeter = 2*(this->height) + 2*(this->width);
    return perimeter;
}
void Rectangle::Draw(Canvas *canvas){
    for(int i=y; i<y+height; i++){
        for(int j=x; j<x+width; j++){
            canvas->DrawPixel(j, i, brush);
        }
    }
}