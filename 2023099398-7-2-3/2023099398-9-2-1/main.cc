#include "shapes.h"
#include <iostream>
#include <vector>

using namespace std;

int main(){
    double T_width, T_height, R_width, R_height;
    cin >> T_width >> T_height >> R_width >> R_height;

    vector<Shape *> pShapeVec;

    pShapeVec.push_back(new Triangle(T_width, T_height));
    pShapeVec.push_back(new Rectangle(R_width, R_height));

    for(int i=0; i<2; i++){
        cout << pShapeVec[i]->getArea() << endl;
        delete pShapeVec[i];
    }

    return 0;
}