#include <iostream>
#include "my_dataxxx.h"

class Flt_obj_5
{
    private:
    my_dataxxx d;

    public:
    Flt_obj_5() : d{1.1, 2.2} {} // Default Constructor
    Flt_obj_5(float f) : d{f} {} // one -- arg constructor
    Flt_obj_5(float f1, float f2) : d{f1, f2} {} // Constructor

    // Getters
    float get_f1(){return d.x;}
    float get_f2(){return d.y;}

    // Shower
    void show_data(){std::cout << d.x << " & " << d.y << std::endl;}

    Flt_obj_5 operator ++();
};

Flt_obj_5 Flt_obj_5::operator ++(){
    ++d.x;
    return Flt_obj_5(d.x);
}