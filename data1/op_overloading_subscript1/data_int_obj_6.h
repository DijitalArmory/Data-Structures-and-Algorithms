#include <iostream>
#include "my_data_xx.h"     // for LIMIT const 


class Int_obj_6
{
    private:
    int safe_arr[LIMIT];

    public:

    // Setter
    void set_element(int, int);

    // Getter
    int get_element(int) const;

    // Insert Elements
    void insert_elements(int);

    // Display Elements
    void display_elements();

};

// Setter
void Int_obj_6::set_element(int n, int element_value){     //set value of element{
        if ( n < 0 || n >= LIMIT ){
            std::cout << "Index out of bounds" << std::endl; 
            exit(1); 
        }
        safe_arr[n] = element_value;
    }

// Getter
int Int_obj_6::get_element(int n) const {          //get value of element
        if ( n < 0 || n >= LIMIT ){
            std::cout << "Index out of bounds" << std::endl; 
            exit(1); 
        }

        return safe_arr[n];
    }

// Insert
void Int_obj_6::insert_elements(int n){
        for(int j=0; j<LIMIT; j++){
            this->set_element(j, j*10);
        } 
            
    }

// Display
void Int_obj_6::display_elements(){
        for(int j = 0; j < LIMIT ; j++){
            int temp = this->get_element(j);
            std::cout << "Element " << j << " is " << temp << std::endl;
        }
    }