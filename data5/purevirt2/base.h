#include <iostream>
using namespace std;

class Base
{
    public:
    virtual ~Base(){cout << "Virtual Base Destroyed" << endl;}
};

/*
    Base* bp = new Derived1;
    delete bp;

*/