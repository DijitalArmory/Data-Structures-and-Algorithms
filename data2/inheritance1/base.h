#include <iostream>
using namespace std;

class BaseClass
{
    private:
    int a;
    
    public:
    BaseClass() : a(0) {}

    void display_data(){
        cout << "a is " << a << endl;
    }
};