#include <iostream>
#include "my_arr_data.h"
using namespace std;

class Ptrarr
{
    public:
    //int my_arr_data;
    void show_arr(){
        for (int i = 0; i < 5; i++){
            cout << my_arr_data[i] << endl;
        }
    }

    void show_ptr_arr(){
        for (int i = 0; i < 5; i++){
            cout << *(my_arr_data+i) << endl;
        }
    }

};