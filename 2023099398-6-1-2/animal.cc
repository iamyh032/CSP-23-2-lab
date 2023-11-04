#include "animal.h"
#include <iostream>
using namespace std;

// class Animal
Animal::Animal(string _name, int _age){
    this->name = _name;
    this->age = _age;
}

// class Zebra
Zebra::Zebra(string _name, int _age, int _numStripes) : Animal(_name, _age) {
    this->name = _name;
    this->age = _age;
    this->numStripes = _numStripes;
}
void Zebra::printInfo(){
    cout << "Zebra, Name: " << name << ", Age: " << age 
    << ", Number of stripes: " << numStripes << endl;
}

// class Cat
Cat::Cat(string _name, int _age, string _favoriteToy) : Animal(_name, _age) {
    this->name = _name;
    this->age = _age;
    this->favoriteToy = _favoriteToy;
}
void Cat::printInfo(){
    cout << "Cat, Name: " << name << ", Age: " << age 
    << ", Favorite toy: " << favoriteToy << endl;
}