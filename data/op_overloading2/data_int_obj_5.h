#include <iostream> 
#include "my_dataxx.h"

class Int_obj_5
{
    private:
    my_dataxx d1;

    public:
    // Default Constructor
    Int_obj_5() : d1{0, 0} {}

    // Constructor
    Int_obj_5(int x, int y) : d1{x, y} {}

    int get_x(){return d1.x;}
    int get_y(){return d1.y;}

    Int_obj_5 operator ++();

    void show_data(){
        std::cout << d1.x << std::endl;
        std::cout << d1.y << std::endl;
    }


};

Int_obj_5 Int_obj_5::operator ++(){
    ++d1.x;
    Int_obj_5 temp;
    temp.d1.x = d1.x;
    return temp;
}