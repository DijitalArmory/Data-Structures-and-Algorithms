#include <iostream>
#include "arr_data.h"
using namespace std;

class Ptrinc
{
    private:
    int* ptrint;

    public:
    Ptrinc(){
        ptrint = arr_data;
    }

    void show_arr_data(){
        for (int i = 0; i < 5; i++){
            cout << *(ptrint++) << endl;
        }
    }

    
};