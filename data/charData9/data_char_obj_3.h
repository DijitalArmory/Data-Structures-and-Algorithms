#include <iostream>


class Chr_obj_3
{
    private:
    char ch1;
    char ch2;

    public:
    // Default Constructor
    Chr_obj_3() : ch1('x'), ch2('y') {}
    // -- no one argument constructor

    // Constructor -- two arguments
    Chr_obj_3(char c1, char c2) : ch1(c1), ch2(c2) {} 

    // Getters
    char get_c1(){return ch1;}
    char get_c2(){return ch2;}

    // const data member function
    void show_data() const {
        std::cout << ch1 << std::endl;
        std::cout << ch2 << std::endl;
    }

    Chr_obj_3 add_one(const Chr_obj_3&) const;
    /*
    // Member function -- data member can be modified
    void my_mem_func(){
        ch = 99; // No Err
        std::cout << ch << std::endl;
    }
    // const member function -- data member cannot be modified
    void my_const_func() const {
        // ch = 99; // Err=assignment of member ‘Chr_obj_3::ch’ in read-only object
    }
    */
};

Chr_obj_3 Chr_obj_3::add_one(const Chr_obj_3& ch_obj) const {
    // temporary
    Chr_obj_3 temp; 
    temp.ch1 += ch1 + (ch_obj.ch1);
    temp.ch2 += ch2 + (ch_obj.ch2);
    
    return temp;
}