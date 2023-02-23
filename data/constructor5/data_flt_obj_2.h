class Flt_obj_2
{
    private:
    float my_float_1;
    float my_float_2;

    public:
    // Default Constructor
    Flt_obj_2() : my_float_1(0.0), my_float_2(0.0) {}
    
    // NOTE: no one-argument constructor

    // Constructor -- two arguments
    Flt_obj_2(float f1, float f2) : my_float_1(f1), my_float_2(f2) {}

    float get_f1(float f1){return my_float_1;}
    float get_f2(float f2){return my_float_2;}

    void show_f1(){
        std::cout << my_float_1 << std::endl;
    }
    void show_f2(){
        std::cout << my_float_2 << std::endl;
    }
};