#include <iostream> 
#include "my_data.h"

class Flt_obj_4
{
    private:
    my_dataa d1;
    my_dataa d2;

    public:
    // Default Constructor
    Flt_obj_4() : d1{0, 0}, d2{0, 0} {}

    // Constructor
    Flt_obj_4(float f1, float f2, float f3, float f4) : d1{f1, f2}, d2{f3, f4} {}

    float get_f1(){return d1.f1;}
    float get_f2(){return d1.f2;}

    void operator ++(int f){++f;}

    void show_data(){
        std::cout << d1.f1 << std::endl;
        std::cout << d1.f2 << std::endl;
        std::cout << d2.f1 << std::endl;
        std::cout << d2.f2 << std::endl;
    }

    void show_inc_data(){
        std::cout << ++d1.f1 << std::endl;
        std::cout << ++d1.f2 << std::endl;
        std::cout << ++d2.f1 << std::endl;
        std::cout << ++d2.f2 << std::endl;
    }

};