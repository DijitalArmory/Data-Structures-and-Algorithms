#include <iostream>
#include "arr_data_xyz.h"
using namespace std;

class Arrofptrs
{
    public:
    void display(){
        for(int j = 0; j < DAYS; j++){
            cout << arrptrs[j] << endl;
        }
    }
            
};

/*
in main()...
    Arrofptrs obj;
    obj.display();
*/