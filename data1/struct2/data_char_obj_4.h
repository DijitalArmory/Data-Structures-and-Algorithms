#include <iostream>
#include "my_datax.h"


class Chr_obj_4
{
    private:
    my_datax md1;
    my_datax mda[3];

    // private shower to be used in public shower
    void show_s(const my_datax&);

    public: 
    // Default Constructor
    Chr_obj_4() : mda{{'r', 'e'}, {'n', 'o'}, {'x', 'y'}} {}
    // Constructor
    Chr_obj_4(char a, char b, char c, char d, char e, char f) :  
    mda{{a, b}, {c, d}, {e, f}} {}

    // Showers
    void show_all_s();

};

// private method
void Chr_obj_4::show_s(const my_datax& d){
    std::cout << d.ch1 << std::endl;
    std::cout << d.ch2 << std::endl;
}

// public method
void Chr_obj_4::show_all_s(){
    for (auto s : mda){
        std::cout << s.ch1 << std::endl;
        std::cout << s.ch2 << std::endl;
    }
}