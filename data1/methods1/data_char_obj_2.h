#include <iostream>
#include <cctype>

class Chr_obj_2
{
    private:
    unsigned char uc;
    signed char sc;

    public:
    // Constructor -- no arguments
    Chr_obj_2() : uc('x'), sc('y') {}

    // Constructor -- two arguments
    Chr_obj_2(unsigned char u, signed char s) : uc(u), sc(s) {}

    void show_uc(){std::cout << uc << std::endl;}
    void show_sc(){std::cout << sc << std::endl;}

    // Prototype
    Chr_obj_2 make_upper(Chr_obj_2);
};

// Declaration
Chr_obj_2 Chr_obj_2::make_upper(Chr_obj_2 c_obj){
    // shows the ascii integer equivelant of the uppercase data chars
    // toupper(x) == 88
    // toupper(y) == 89
    std::cout << toupper(c_obj.uc) << std::endl; 
    std::cout << toupper(c_obj.sc) << std::endl;

    return c_obj;
}