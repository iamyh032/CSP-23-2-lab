#include <iostream>
#include "shapes.h"
#include <string>

using namespace std;

int main(void){
    int canvasSize[2];
    cin >> canvasSize[0] >> canvasSize[1];
    Canvas newCanvas(canvasSize[1], canvasSize[0]);


    string word;
    string rect = "rect";
    string square = "square";
    string quit = "quit";

    int judge = 0;

    while(judge == 0){
        newCanvas.Clear();
        cin >> word;
        if(word == quit){
            judge = -1;
        }
        else if(word == rect){
            Rectangle rectangle;
            size_t a, b, c, d;
            char e;
            cin >> a >> b >> c >> d;
            cin >> e;
            rectangle.get_x_y_width_height_brush(a, b, c, d, e);

            double area = rectangle.GetArea();
            
            cout << "Area: " << area << endl;
            int perimeter = rectangle.GetPerimeter();
            cout << "Perimeter: " << perimeter << endl;

            rectangle.Draw(&newCanvas);
            newCanvas.Print();
            
        }
        else if(word == square){
            Square square;
            size_t a, b, c;
            char e;
            cin >> a >> b >> c >> e;
            square.get_x_y_width_height_brush(a, b, c, e);

            double area = square.GetArea();
            cout << "Area: " << area << endl;
            int perimeter = square.GetPerimeter();
            cout << "Perimeter: " << perimeter << endl;
         
            square.Draw(&newCanvas);
            newCanvas.Print();
           
        }
        
    }
}