#include <iostream>
#include "animal.h"
using namespace std;

int main(){
    Animal* array[10];
    char z_c;
    string name;
    int age;
    int numStripes;
    string favoriteToy;

    int count = -1;
    for(int i=0; i<10; i++){
        cin >> z_c;
        if(z_c=='c'){
            cin >> name >> age >> favoriteToy;
            Cat* cat = new Cat(name, age, favoriteToy);
            array[i] = cat;
            count = i;
        }
        else if(z_c=='z'){
            cin >> name >> age >> numStripes;
            Zebra* zebra = new Zebra(name, age, numStripes);
            array[i] = zebra;
            count = i;
        }
        else{
            break;
        }
    }
    for(int i=0; i<=count; i++){
        array[i]->printInfo();
        delete array[i];
    }
    return 0;
}