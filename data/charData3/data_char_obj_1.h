#include <iostream>

class Char_obj_1
{
    private:

    unsigned char my_uc;
    signed char my_sc;

    public:
    // Constructor
    Char_obj_1(unsigned char u, signed char s) :
    my_uc(u), my_sc(s) 
    {
        // Consgtructor body
    }

    // Getters
    unsigned char get_uc_data(){return my_uc;}
    signed char get_sc_data(){return my_sc;}

    void show_uc_data(){
        std::cout << my_uc << std::endl;
    }
    void show_sc_data(){
        std::cout << my_sc << std::endl;
    }
};