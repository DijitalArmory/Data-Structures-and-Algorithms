#include <iostream>
using namespace std;

class Derived2 : public Base
{
    public:
    ~Derived2(){cout << "Derived2 Destroyed" << endl;}
};