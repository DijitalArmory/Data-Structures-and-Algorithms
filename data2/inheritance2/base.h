#include <iostream>
using namespace std;

class BaseClass
{
    private:
    int a;
    

    public:
    BaseClass(int a) : a(a) {}

    void display_data(){
        cout << "a is " << a << endl;
    }
};