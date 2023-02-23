#include <iostream> 
#include "my_data.h"

class Flt_obj_3
{
    private:
    f_data my_f_data;
    static int count;

    public:
    // Default Constructor
    Flt_obj_3() : my_f_data{0.0, 0.0} {count++;}
    // no one argument constructor
    // Construct -- two arguments
    Flt_obj_3(float f) : my_f_data{f, 0.0} {}

    // Showers
    void show_f1(){
        std::cout << my_f_data.f1 << std::endl;
    }
    void show_f2(){
        std::cout << my_f_data.f2 << std::endl;
    }

    // Static data member method(s)
    int get_count(){return count;}
   
    
    
    // Prototype
    Flt_obj_3 get_sum(Flt_obj_3);  

};

Flt_obj_3 Flt_obj_3::get_sum(Flt_obj_3 o1){
    std::cout << o1.my_f_data.f1 + 3.7 << std::endl;
    return o1;
}

int Flt_obj_3::count = 0;