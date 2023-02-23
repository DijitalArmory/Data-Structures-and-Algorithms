#include <iostream>

class Int_obj_2
{
    private:

    unsigned int my_uc;
    signed int my_sc;

    public:
    // Default Constructor -- no args
    Int_obj_2(): my_uc(5), my_sc(10) {}
    // Constructor -- 1 arg
    Int_obj_2(unsigned int u) : my_uc(u), my_sc(10){}
    // Constructor -- 2 args
    Int_obj_2(unsigned int u, signed int s) :
    my_uc(u), my_sc(s) {}

    unsigned int get_uc_data(){return my_uc;}
    signed int get_sc_data(){return my_sc;}

    void show_uc_data(){
        std::cout << my_uc << std::endl;
    }
    void show_sc_data(){
        std::cout << my_sc << std::endl;
    }

    
    // Method Prototype
    void sum_up_ints(Int_obj_2, Int_obj_2);
    
};


// Method initialization
void Int_obj_2::sum_up_ints(Int_obj_2 c_obj_a, Int_obj_2 c_obj_b){
    my_uc = c_obj_a.my_uc + c_obj_b.my_uc + 17;
    my_sc = c_obj_a.my_sc + c_obj_b.my_sc + this->my_sc + 17;
    std::cout << my_uc << std::endl;
    std::cout << my_sc << std::endl;
}

