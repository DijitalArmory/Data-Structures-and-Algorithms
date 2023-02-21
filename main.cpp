#include <iostream>
#include "data/intData1/data_int_obj_1.h"
#include "data/floatData2/data_flt_obj_1.h"
#include "data/charData3/data_char_obj_1.h"
#include "data/intData4/data_int_obj_2.h"
#include "data/floatData5/data_flt_obj_2.h"
#include "data/charData6/data_char_obj_2.h"
#include "data/intData7/data_int_obj_3.h"
#include "data/floatData8/data_flt_obj_3.h"
#include "data/charData9/data_char_obj_3.h"
#include "data/intData10/data_int_obj_4.h"
#include "data/floatData11/data_flt_obj_4.h"
#include "data/charData12/data_char_obj_4.h"
#include "data/intData13/data_int_obj_5.h"

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

    Int_obj_3 i1;
    Int_obj_3 i2(10);
    Int_obj_3 i3(20, 30);


    Flt_obj_3 f_obj_a;
    Flt_obj_3 f_obj_b(f_obj_a);
    Flt_obj_3 f_obj_c = f_obj_a;
    Flt_obj_3 f_obj_d;
    Flt_obj_3 f_obj_e;

    Chr_obj_3 ch1; // defin two const objects
    Chr_obj_3 ch2;

    Chr_obj_3 ch3('R', 'E'); // define & initialize obj
    const Chr_obj_3 ch4;
    const Chr_obj_3 ch5('n', 'O');
    
    Int_obj_4 i_obj_1;
    Int_obj_4 i_obj_2;
    Int_obj_4 i_obj_3(2, 4, 6, 8);
    Int_obj_4 i_obj_4;

    Flt_obj_4 fobj1;
    Flt_obj_4 fobj2;
  
    Chr_obj_4 cobj1;    
    Chr_obj_4 cobj2('1', '2', '3', '4', '5', '6');

    Int_obj_5 intobj1;
    Int_obj_5 intobj2(4, 7);
    Int_obj_5 intobj3;
    Int_obj_5 intobj4;



/*  /////////////////////////////////////   */
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

    cout << ":The default copies..." << endl;
    cc1.show_uc();
    cc1.show_sc();
    cc1.make_upper(cc2);

    cout << "initialized struct data" << endl;
    i1.show_ui();
    i1.show_si();

    i2.show_ui();
    i2.show_si();

    i3.show_ui();
    i3.show_si();

    // 
    f_obj_a.show_f1();
    f_obj_a.show_f2();

    f_obj_b.show_f1();
    f_obj_b.show_f2();

    f_obj_c.show_f1();
    f_obj_c.show_f2();

    f_obj_a.get_sum(f_obj_c);
    f_obj_b.get_sum(f_obj_b);
    f_obj_c.get_sum(f_obj_a);

    cout << "shared static variable" << endl;
    cout << f_obj_a.get_count() << endl;
    cout << f_obj_b.get_count() << endl;
    
    cout << "const data member functions" << endl;
    
    ch3.get_c1();
    ch3.get_c2();
    ch2.get_c1();
    ch2.get_c2();
    ch1.get_c1();
    ch1.get_c2();
    

    ch1 = ch2.add_one(ch3);
    ch1.show_data();

    ch2=ch1.add_one(ch3);
    ch1.show_data();
    
    /*
    // throws a compiler err

    ch4.get_c1();
    ch4.get_c2();
    
    // error: passing ‘const Chr_obj_3’
    }

    void show_d2_data(){
        std::cout << inc_flt(d2.f1) << std::endl;
        std::cout << inc_flt(d2.f2) << std::endl;
    }

}; as ‘this’ argument discards qualifiers
    */

    // ch4 = ch1.add_one(ch3); error=error: passing ‘const Chr_obj_3’ as ‘this’ argument discards qualifiers
    ch4.show_data();
    ch5.show_data();

    cout << "array data" << endl;

    i_obj_1.show_ui();
    i_obj_1.show_ci();
    i_obj_1.show_cni();
    i_obj_1.show_sti();
    //i_obj_1.show_arr();

    i_obj_3.show_ui();
    i_obj_3.show_ci();
    i_obj_3.show_cni();
    i_obj_3.show_sti();
    //i_obj_3.show_arr();

    cout << "Unary Overloading" << endl;
    fobj1.show_data();
    fobj2.show_data();

    fobj1.show_inc_data();
    fobj2.show_inc_data();

    fobj1.show_data();
    fobj2.show_data();

    cout << "array of structs" << endl;
    cobj1.show_all_s();
    cobj2.show_all_s();

    cout << "unary overloaded (w/return value)" << endl;
    intobj1.show_data();
    intobj2.show_data();

    
    intobj3 = ++intobj2;
    intobj3.show_data();
    
    return 0;
};