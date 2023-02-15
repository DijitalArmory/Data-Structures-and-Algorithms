#include <iostream>
#include "data/intData1/data_int_obj.h"
#include "data/intData2/data_int_obj_2.h"
#include "data/intData3/data_int_obj_3.h"

int main()
{
    Int_obj test1;
    Int_obj_2 test2;
    Int_obj_3 test3;

    test1.set_uint_data(5);
    test1.show_uint_data();
    test1.set_sint_data(-5);
    test1.show_sint_data();
    test1.set_ulint_data(10);
    test1.show_ulint_data();
    test1.set_slint_data(-10);
    test1.show_slint_data();
    test1.set_usint_data(15);
    test1.show_usint_data();
    test1.set_ssint_data(-20);
    test1.show_ssint_data();

    test3.show_uint_data(10);
    test3.show_sint_data(-10);
    test3.show_ulint_data(15);
    test3.show_slint_data(-15);
    test3.show_usint_data(20);
    test3.show_ssint_data(-25);

    return 0;
};//member function to display data