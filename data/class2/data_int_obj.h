#include <iostream>

class Int_obj 
{
private:
unsigned int my_u_int; 
signed int my_s_int;
unsigned long int my_ul_int;
signed long int my_sl_int;
unsigned short int my_us_int;
signed short int my_ss_int;

public:
void set_uint_data(unsigned int ui){my_u_int = ui;}
void show_uint_data(){std::cout << "unsigned int obj: " << my_u_int << std::endl;}

void set_sint_data(signed int si){my_s_int = si;}
void show_sint_data(){std::cout << "signed int obj: " << my_s_int << std::endl;}

void set_ulint_data(unsigned long int uli){my_ul_int = uli;}
void show_ulint_data(){std::cout << "unsigned long int obj: " << my_ul_int << std::endl;}

void set_slint_data(signed long int sli){my_us_int = sli;}
void show_slint_data(){std::cout << "signed long int is equivelant to 'unsigned long int (0): " << my_ul_int << std::endl;}

void set_usint_data(unsigned short int usi){my_us_int = usi;}
void show_usint_data(){std::cout << "unsigned short int: " << my_us_int << std::endl;}

void set_ssint_data(signed short int ssi){my_ss_int = ssi;}
void show_ssint_data(){std::cout << "signed short int: " << my_ss_int << std::endl;}

};
