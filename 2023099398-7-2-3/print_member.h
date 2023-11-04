#ifndef __PRINT_MEMBER_H__
#define __PRINT_MEMBER_H__
#include <string>
using namespace std;

class A {
    int* memberA;

    public:
        A(int x);
        virtual ~A();

        virtual void print();
};

class B : public A {
    double* memberB;

    public:
        B(double x);
        virtual ~B();

        virtual void print();
};

class C : public B {
    string* memberC;

    public:
        C(string x);
        virtual ~C();

        virtual void print();
};

#endif //__PRINT_MEMBER_H__