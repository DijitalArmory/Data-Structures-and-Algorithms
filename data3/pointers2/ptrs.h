#include <iostream>
using namespace std;

class Ptrs
{
    private:
    int a;      // two variables
    int b;
    int *p1;    // two pointers to integers
    int *p2;

    public:
    Ptrs(int a, int b) : a(a), b(b) {
        p1 = &a;    // p1 points to a
        p2 = &b;    // p2 points to b
    }

    void show_data(){
        cout << "a is " << a << endl;
        cout << "b is " << b << endl;
        cout << "p1 -> " << p1;
        cout << " - p1 holds the value of a..." << *p1 << endl;
        cout << "p2 -> " << p2;
        cout << " - p2 holds the value of b..." << *p2 << endl;
    }
};
