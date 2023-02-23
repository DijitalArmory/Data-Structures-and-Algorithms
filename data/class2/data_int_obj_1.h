#include <iostream>

class Int_obj_1
{
    private:
    unsigned int my_ui;
    signed int my_si;

    public:

    // setters
    void set_ui_data(unsigned int ui){
        my_ui = ui;
    }
    void set_si_data(signed int si){
        my_si = si;
    }

    // getters 
    unsigned int get_ui_data(){return my_ui;}
    signed int get_si_data(){return my_si;}

    // showers
    void show_ui_data(){
        std::cout << my_ui << std::endl;
    }
    void show_si_data(){
        std::cout << my_si << std::endl;
    }

};