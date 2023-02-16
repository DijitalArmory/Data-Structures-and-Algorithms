#include <iostream>
#include "data/intData1/data_int_obj_1.h"
#include "data/floatData2/data_flt_obj_1.h"
#include "data/charData3/data_char_obj_1.h"
#include "data/intData4/data_int_obj_2.h"
#include "data/floatData5/data_flt_obj_2.h"
#include "data/charData6/data_char_obj_2.h"

using namespace std;


int main()
{
    Int_obj_1 test1;
    Flt_obj_1 test2;
    Char_obj_1 test3('u', 's');

    Int_obj_2 c1;
    Int_obj_2 c2(20);
    Int_obj_2 c3(40, 50);

    
    Flt_obj_2 f0(2.4, 5.8);
    Flt_obj_2 f1(f0);
    Flt_obj_2 f2 = f0;

    Chr_obj_2 cc1;
    Chr_obj_2 cc2;
    

    cout << "class data" << endl;
    test1.set_ui_data(5);
    test1.get_ui_data();
    test1.show_ui_data();
    test1.set_si_data(-5);
    test1.get_si_data();
    test1.show_si_data();

    cout << "class data" << endl;
    test2.set_f1_data(10.00);
    test2.get_f1_data();
    test2.show_f1_data();
    test2.set_f2_data(-10.00);
    test2.get_f2_data();
    test2.show_f2_data();

    cout << "class data" << endl;
    test3.get_uc_data();
    test3.show_uc_data();
    test3.get_sc_data();
    test3.show_sc_data();

    cout << "class data w/overloaded constructors" << endl;
    c1.get_uc_data();
    c1.show_uc_data();
    c1.get_sc_data();
    c1.show_sc_data();


    c2.get_uc_data();
    c2.show_uc_data();
    c2.get_sc_data();
    c2.show_sc_data();

    c3.get_uc_data();
    c3.show_uc_data();
    c3.get_sc_data();
    c3.show_sc_data();
    c1.sum_up_ints(c2, c3);

    cout << "Default Copy Constructor Data" << endl;
    f0.show_f1();
    f0.show_f2();
    f1.show_f1();
    f1.show_f2();
    f2.show_f1();
    f2.show_f2();

    cc1.show_uc();
    cc1.show_sc();
    cc1.make_upper(cc2);
   
    
    return 0;
};