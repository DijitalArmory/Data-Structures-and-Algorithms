#include <iostream>
#include "arr_data_x.h"

using namespace std;

class Ptrfuncarr
{
    public:
    void change(double* dd){
        for (int i = 0; i < MAX; i++){
            *dd++ += 5.2;
        }
    }
};

/*
In main()...

    double varray[5] = { 10.0, 43.1, 95.9, 59.7, 87.3 };
    
    Ptrfuncarr obj;
    obj.change(varray);

    for (int i = 0; i < 5; i++)
        cout << varray[i] << endl;
*/