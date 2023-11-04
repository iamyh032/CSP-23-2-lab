#ifndef __PRINT_INFO_H__
#define __PRINT_INFO_H__
#include <iostream>
#include <string>

class A {
    public:
        virtual std::string getTypeInfo();
};

class B : public A {
    public:
        virtual std::string getTypeInfo();
};

class C : public B {
    public:
        virtual std::string getTypeInfo();
};


#endif //__PRINT_INFO_H__