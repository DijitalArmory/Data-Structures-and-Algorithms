#include <iostream>
#include "my_data_xxx.h"

class Flt_obj_6
{
    private:
    int safe_arr[LIMIT];

    public:
    int& access(int n);

    void temp(){std::cout << "temp" << std::endl;}

    void insert_elements();

    void display_elements();
};


// Access 
int& Flt_obj_6::access(int n){
    if ( n < 0 || n >= LIMIT ){
        std::cout << "array out of bounds " << std::endl;
    }
    return safe_arr[n];
}

// Insert
void Flt_obj_6::insert_elements(){
    for (int j = 0; j < LIMIT; j++){
        this->access(j) = j*10;     // left side of equal sthis->ign
    }
}


void Flt_obj_6::display_elements(){
    for (int j = 0; j < LIMIT; j++){
        int temp = this->access(j);     // right side of equal sign
        std::cout << "Element: " << j << " is " << temp << std::endl;
    }
}