#include <iostream>

class Int_obj_3
{
    private: 
    unsigned int my_u_int; 
    signed int my_s_int;
    unsigned long int my_ul_int;
    signed long int my_sl_int;
    unsigned short int my_us_int;
    signed short int my_ss_int;

    public:
    Int_obj_3(
        unsigned int ui, 
        signed int si, 
        unsigned long int ul,
        signed long int sl, 
        unsigned short int us, 
        signed short int ss 
    ) :             
                    my_u_int(ui), 
                    my_s_int(si), 
                    my_ul_int(ul), 
                    my_sl_int(sl), 
                    my_us_int(us), 
                    my_ss_int(ss)   
                    {
                        // same as Constructor(){x=0, y=o, etc.}
                    }

    void show_uint_data(unsigned int ui)
    {
        //ui = get_uint_data();
        std::cout << "unsigned int: " << ui << std::endl;
    }

    void show_sint_data(signed int si)
    {
        //si = get_sint_data();
        std::cout << "signed int: " << si << std::endl;
    }

    void show_ulint_data(unsigned long int ul)
    {
        //uli = get_ulint_data();
        std::cout << "unsigned long int: " << ul << std::endl;
    }

    void show_slint_data(signed long int sl)
    {
        //sli = get_slint_data();
        std::cout << "signed long int: " << sl << std::endl;
    }

    void show_usint_data(unsigned short int us)
    {
        //usi = get_usint_data();
        std::cout << "unsigned short int: " << us << std::endl;
    }

    void show_ssint_data(signed short int ss)
    {
        //ssi = get_ssint_data();
        std::cout << "signed short int: " << ss << std::endl;
    }

};