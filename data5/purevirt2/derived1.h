#include <iostream>
using namespace std;

class Derived1 : public Base
{
    public:
    ~Derived1(){cout << "Derived1 Destroyed" << endl;}
};