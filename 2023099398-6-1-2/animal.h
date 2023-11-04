#ifndef __ANIMAL_H__
#define __ANIMAL_H__

#include <string>
using namespace std;

class Animal{
    public:
        Animal(string _name, int _age);
        virtual void printInfo() = 0;
    protected:
        string name;
        int age;
};

class Zebra : public Animal {
    public:
        Zebra(string _name, int _age, int _numStripes);
        void printInfo();
    private:
        int numStripes;

};

class Cat : public Animal {
    public:
        Cat(string _name, int _age, string _favoriteToy);
        void printInfo();
    private:
        string favoriteToy;
};

#endif // __ANIMAL_H__