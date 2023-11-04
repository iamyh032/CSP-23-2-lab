#include "classes.h"
#include <iostream>

using namespace std;

int main(){

    A* array[3];
    array[0] = new A;
    array[1] = new B;
    array[2] = new C;

    for(int i=0; i<3; i++){
        array[i]->test();
    }

    for(int i=0; i<3; i++){
        delete array[i];
    }

    return 0;
}