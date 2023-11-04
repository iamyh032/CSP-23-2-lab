#include "print_info.h"
#include <iostream>
#include <string>

using namespace std;

void printObjectTypeInfo1(A* object){
    cout << object->getTypeInfo() << endl;
}

void printObjectTypeInfo2(A& object){
    cout << object.getTypeInfo() << endl;
}

int main(){
    A* array[3];

    array[0] = new A;
    array[1] = new B;
    array[2] = new C;

    for(int i=0; i<3; i++){
        printObjectTypeInfo1(array[i]);
        printObjectTypeInfo2(*array[i]);
    }

    for(int i=0; i<3; i++){
        delete array[i];
    }

    return 0;
}