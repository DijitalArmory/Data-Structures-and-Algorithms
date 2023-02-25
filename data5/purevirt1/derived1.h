#ifndef DERIVED1_H
#define DERIVED1_H


#include <iostream>
using namespace std;

class Derived1 : public BaseClass
{
    public:
    void show();
};

void Derived1::show(){
    cout << "Derived1 Class" << endl;
}

#endif