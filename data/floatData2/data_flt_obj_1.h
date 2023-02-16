#include <iostream>

class Flt_obj_1
{
    private:

    float my_f1;
    float my_f2;

    public:
    // Constructor
    Flt_obj_1() : my_f1(0.0), my_f2(0.0) 
    {
        // constructor body
    }

    // Setters
    void set_f1_data(float f1){
        my_f1 = f1;
    }
    void set_f2_data(float f2){
        my_f2 = f2;
    }

    // Getters
    float get_f1_data(){return my_f1;}
    float get_f2_data(){return my_f2;}

    // Showers
    void show_f1_data(){
        std::cout << my_f1 << std::endl;
    }
    void show_f2_data(){
        std::cout << my_f2 << std::endl;
    }
};