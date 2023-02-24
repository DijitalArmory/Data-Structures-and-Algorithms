#include <iostream>
using namespace std;

class BaseClass
{
    protected:
    int a;

    public:
    BaseClass() : a(0) {}
    BaseClass(int a) : a(a) {}

    void display_data(){
        cout << "a is " << a << endl;
    }
};