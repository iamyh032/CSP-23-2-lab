#include "print_member.h"
#include <iostream>
#include <string>

using namespace std;

int main(){
    A* array[3];

    int x;
    double y;
    string z;

    cin >> x >> y >> z;

    array[0] = new A(x);
    array[1] = new B(y);
    array[2] = new C(z);

    for(int i=0; i<3; i++){
        array[i]->print();
    }

    for(int i=0; i<3; i++){
        delete array[i];
    }
    return 0;
}