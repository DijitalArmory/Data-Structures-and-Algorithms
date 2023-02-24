#include <iostream>
using namespace std;

class Ptrfunc1
{
    public:

    void change(double* dd){
        *dd += 56.8;
        cout << *dd << endl;
    }
    

};

/*
in main()...

    double p = 5.3;
    Ptrfunc1 obj;
    obj.change(&p);
    p = 6.7;    // change variable value
    cout << p << endl;
    obj.change(&p); incrementing modified variable
*/