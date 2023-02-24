#include <iostream>
#include "base.h"
using namespace std;

class DerivedClass : public BaseClass
{
    private:
    int a;
    int b; 

    public:
    DerivedClass(int a) : BaseClass(a) {}
    DerivedClass(int a, int b) : BaseClass(a) {this->b = b;}

    void show_this_data(){
        cout << "b is " << b << endl;
    }
};