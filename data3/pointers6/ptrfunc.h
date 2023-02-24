#include <iostream>
using namespace std;

class Ptrfunc
{
    private:
    double d;

    public:
    Ptrfunc() : d(3.3) {}

    void show_var(){
        cout << d << endl;
    }

    double change(double& var){
        var += 50.5;
        return var;
    }

    void show_change(){
        cout << change(d) << endl;
    }
};

/*
Run in Main()...

    Ptrfunc obj;
    obj.show_var();
    obj.show_change();
    obj.show_var();
*/