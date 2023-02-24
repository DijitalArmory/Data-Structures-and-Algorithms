# 1
* Exception to pointer types
* from the book "Object oriented C++"
- The address that you put in a pointer must be the same type as the pointer. You can’t assign the address of a float variable to a pointer to int, for example.

- However, there is an exception to this. There is a sort of general-purpose pointer that can point to any data type. This is called a pointer to void, and is defined like this: void* ptr;

# 2 
- This data shows a pointer to void and also shows that, if you don’t use void, you must
be careful to assign pointers an address of the same type as the pointer.

- notice that a void* pointer can assign a variable of any other type to it. 