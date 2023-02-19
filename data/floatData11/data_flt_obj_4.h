#include <iostream>
#include "my_data.h"

class Flt_obj_4
{
    private:
    my_dataa d;
    float flt1;
    static float flt3;
    const float flt4;
    float af1;
    float af2;

    public:
    // Default Constructor
    Flt_obj_4() : d{0,0}, flt1(0), flt4(0) {flt3++;}
    // Constructor -- multiple arguments
    Flt_obj_4(
        float fp1, 
        float fp2, 
        float fp3, 
        float fp4, 
        float fp5
    ) : d{fp1, fp2}, flt4(fp3), af1(fp4), af2(fp5) {}

    // Getters
    float get_d1(){return d.f1;}
    float getd2(){return d.f2;}
    float get_flt1(){return flt1;}
    float get_flt3(){return flt3;} // static variable
    float get_flt4(){return flt4;}
    float get_af1(){return af1;}
    float get_af2(){return af2;}

    void show_data();
    void show_arr_data();
};

// static var
float Flt_obj_4::flt3 = 0;

void Flt_obj_4::show_data(){
    std::cout << d.f1 << std::endl;
    std::cout << d.f2 << std::endl;
    std::cout << flt1 << std::endl;
    std::cout << flt3 << " static" << std::endl; // static
    std::cout << flt4 << std::endl; // const 
}

void Flt_obj_4::show_arr_data(){
    for (int i = 0; i < af1; i++){
        for (int j = 0; j < af2; j++){
            i = af1;
            j = af2;
        }
        std::cout << af1 << "--" << af2 << std::endl;
        
    }

}