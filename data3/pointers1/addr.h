#include <iostream>
using namespace std;

class Addrof
{
    private:
    int x;
    int y;
    int z;

    public:
    Addrof() : x(0), y(0), z(0) {}
    Addrof(int x, int y, int z) : x(x), y(y), z(z) {}

    void show_address(){
        cout << "Address of x is " << &x << endl;
        cout << "Address of y is " << &y << endl;
        cout << "Address of z is " << &z << endl;
    }
};