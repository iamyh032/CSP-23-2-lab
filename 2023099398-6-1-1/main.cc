#include "shapes.h"
#include <iostream>

using namespace std;

int main(void){
    Shape* array[10];
    char r_t;
    int a, b;

    int count = -1;
    for(int i=0; i<10; i++){
        cin >> r_t;
        if(r_t=='r'){
            cin >> a >> b;
            Rectangle* rectangle = new Rectangle(a, b);
            array[i] = rectangle;
            count = i;
        }
        else if(r_t=='t'){
            cin >> a >> b;
            Triangle* triangle = new Triangle(a, b);
            array[i] = triangle;
            count = i;
        }
        else{
            break;
        }
    }
    for(int i=0; i<=count; i++){
        double area = array[i]->getArea();
        cout << area << endl;
        delete array[i];
    }
    return 0;
}