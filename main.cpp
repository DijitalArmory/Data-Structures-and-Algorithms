#include <iostream>
#include "data/intData/data_int_obj.h"

int main()
{
    Int_obj test1;
    test1.set_uint_data(5);
    test1.show_uint_data();
    test1.set_sint_data(-5);
    test1.show_sint_data();
    test1.set_ulint_data(10);
    test1.show_ulint_data();
    test1.set_slint_data(-10);
    test1.show_slint_data();

    return 0;
};//member function to display data