#include <iostream>
#include "my_int_data.h"

class Int_obj_3
{
    private:
    my_int_data m;

    public:
    // Default constructor
    Int_obj_3() : m{0, 0} {}
    // Constructor -- one argument
    Int_obj_3(unsigned int u) : m{u} {}
    // Constructor -- two argument
    Int_obj_3(unsigned int u, signed int s) : m{u, s} {}
    
    //unsigned int get_ui(){return m.ui;}
    //unsigned int get_si(){return m.si;}

    void show_ui(){
        std::cout << m.ui << std::endl;
    }
    void show_si(){
        std::cout << m.si << std::endl;
    }

};