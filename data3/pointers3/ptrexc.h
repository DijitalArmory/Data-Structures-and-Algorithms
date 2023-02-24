#include <iostream>
using namespace std;

class Ptrexc
{
    private:
    int i;
    float f;
    int* pi;
    float* fi;
    void* vi;

    public:
    Ptrexc(){
        pi = &i;
        fi = &f;
        vi = &i; // pointer to void == OK
    } 

    void show_data(){
        cout << "i is " << i << endl;
        cout << "pi is " << *pi << endl;
    }



};