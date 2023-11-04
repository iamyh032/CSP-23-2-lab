#include "shapes.h"
#include <iostream>
using namespace std;

static char **init(char **matrix, const size_t row, const size_t col) {
    for(int i=0; i<row; i++){
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
    for(int i=0; i<row; i++){
        delete[] matrix[i];
    }
    delete[] matrix;
}

/* class Canvas */
Canvas::Canvas(const size_t row, const size_t col){
    this->row = row;
    this->col = col;
    this->canvas = auto_alloc(this->row, this->col);
}

Canvas::~Canvas(){
    auto_delete(this->canvas, this->row, this->col);
}

void Canvas::Print() const {
    cout << " ";
    for(int i=0; i<this->col; i++){
        cout << (i%10);
    }
    cout << endl;

    for(int i=0; i<this->row; i++){
        cout << (i%10);
        for(int j=0; j<this->col; j++){
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

void Canvas::Resize(const size_t row, const size_t col){
    char** oldMatrix = this->canvas;
    auto_delete(this->canvas, this->row, this->col);
    this->row = row;
    this->col = col;
    this->canvas = auto_alloc(this->row, this->col);
}

/* class Rectangle */
void Rectangle::setMemberVariable(size_t a, size_t b, size_t c, size_t d, char e){
    this->y = a;
    this->x = b;
    this->width = c;
    this->height = d;
    this->brush = e;
}

void Rectangle::Draw(Canvas *canvas) const{
    for(int i=y; i<y+height; i++){
        for(int j=x; j<x+width; j++){
            canvas->DrawPixel(j, i, brush);
        }
    }
}

void Rectangle::printInfo() const{
    cout << "rect " << y << " " << x << " " << width << " " << height << " " << brush << endl;
}

/* class UpTriangle */
void UpTriangle::setMemberVariable(size_t a, size_t b, size_t c, char e){
    this->y = a;
    this->x = b;
    this->height = c;
    this->brush = e;
}

void UpTriangle::Draw(Canvas *canvas) const{
    int count=0;
    for(int i=y; i<y+height; i++){
        for(int j=x-count; j<=x+count; j++){
            canvas->DrawPixel(j, i, brush);
        }
        count += 1;
    }
}

void UpTriangle::printInfo() const{
    cout << "tri_up " << y << " " << x << " " << height << " " << brush << endl;
}

/* class DownTriangle */
void DownTriangle::setMemberVariable(size_t a, size_t b, size_t c, char e){
    this->y = a;
    this->x = b;
    this->height = c;
    this->brush = e;
}

void DownTriangle::Draw(Canvas *canvas) const{
    int count=0;
    for(int i=y; i>y-height; i--){
        for(int j=x-count; j<=x+count; j++){
            canvas->DrawPixel(j, i, brush);
        }
        count += 1;
    }
}

void DownTriangle::printInfo() const{
    cout << "tri_down " << y << " " << x << " " << height << " " << brush << endl;
}

/* class Diamond */
void Diamond::setMemberVariable(size_t a, size_t b, size_t c, char e){
    this->y = a;
    this->x = b;
    this->distance = c;
    this->brush = e;
}

void Diamond::Draw(Canvas *canvas) const{
    int count=0;
    for(int i=y; i<=y+distance; i++){
        for(int j=x-count; j<=x+count; j++){
            canvas->DrawPixel(j, i, brush);
        }
        count += 1;
    }
    count = 0;
    for(int i=y+(2*distance); i>y+distance; i--){
        for(int j=x-count; j<=x+count; j++){
            canvas->DrawPixel(j, i, brush);
        }
        count += 1;
    }
}

void Diamond::printInfo() const{
    cout << "diamond " << y << " " << x << " " << distance << " " << brush << endl;
}