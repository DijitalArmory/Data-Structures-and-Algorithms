#ifndef DERIVED2_H
#define DERIVED2_H

#include <iostream>
using namespace std;

class Derived2 : public BaseClass
{
    public:
    void show();
};

void Derived2::show(){
    cout << "Derived 2 Class" << endl;
}

#endif