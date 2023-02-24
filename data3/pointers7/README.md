# 1 
* pointer AND functions 2
- notice that the variable (in main in this case) is passed by reference to a function with a pointer as a parameter. 
- notice that because the change() function is passed an address, it must use the dereference operator,
*ptr, to access the value stored at this address

# 2
- NOTE:
* from the book "Object Oriented C++"
- Passing a pointer as an argument to a function is in some ways similar to passing a reference.
They both permit the variable in the calling program to be modified by the function. However,
the mechanism is different. A reference is an alias for the original variable, while a pointer is
the address of the variable.