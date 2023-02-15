#include <iostream>

class Int_obj_2
{
    private: 
    unsigned int my_u_int; 
    signed int my_s_int;
    unsigned long int my_ul_int;
    signed long int my_sl_int;
    unsigned short int my_us_int;
    signed short int my_ss_int;

    public:
    Int_obj_2() : my_u_int(0), 
                    my_s_int(0), 
                    my_ul_int(0), 
                    my_sl_int(0), 
                    my_us_int(0), 
                    my_ss_int(0)   
                    {
                        // same as Constructor(){x=0, y=o, etc.}
                    }

    unsigned int get_uint_data(){return my_u_int;}
    signed int get_sint_data(){return my_s_int;}
    unsigned long int get_ulint_data(){return my_ul_int;}
    signed long int get_slint_data(){return my_sl_int;}
    unsigned short int get_usint_data(){return my_us_int;}
    signed short int get_ssint_data(){return my_ss_int;}

    void show_uint_data(unsigned int ui)
    {
        ui = get_uint_data();
        std::cout << "unsigned int: " << ui << std::endl;
    }

    void show_sint_data(signed int si)
    {
        si = get_sint_data();
        std::cout << "signed int: " << si << std::endl;
    }

    void show_ulint_data(unsigned long int uli)
    {
        uli = get_ulint_data();
        std::cout << "unsigned long int: " << uli << std::endl;
    }

    void show_slint_data(signed long int sli)
    {
        sli = get_slint_data();
        std::cout << "signed long int: " << sli << std::endl;
    }

    void show_usint_data(unsigned short int usi)
    {
        usi = get_usint_data();
        std::cout << "unsigned short int: " << usi << std::endl;
    }

    void show_ssint_data(signed short int ssi)
    {
        ssi = get_ssint_data();
        std::cout << "signed short int: " << ssi << std::endl;
    }

};