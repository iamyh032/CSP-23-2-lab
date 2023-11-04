#include "print_member.h"
#include <iostream>
#include <string>

using namespace std;

A::A(int x){
    memberA = new int;
    *memberA = x;
    cout << "new memberA" << endl;
}
A::~A(){
    delete memberA;
    cout << "delete memberA" <<endl;
}
void A::print(){
    cout << "*memberA " << *memberA << endl;
}

B::B(double x) : A(1) {
    memberB = new double;
    *memberB = x;
    cout << "new memberB" << endl;
}
B::~B(){
    delete memberB;
    cout << "delete memberB" <<endl;
}
void B::print(){
    A::print();
    cout << "*memberB "  << *memberB << endl;
}

C::C(string x) : B(1.1) {
    memberC = new string;
    *memberC = x;
    cout << "new memberC" << endl;
}
C::~C(){
    delete memberC;
    cout << "delete memberC" <<endl;
}
void C::print(){
    B::print();
    cout  << "*memberC " << *memberC << endl;
}