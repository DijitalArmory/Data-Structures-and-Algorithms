# 1
* Pointers AND functions 1
* from the book "Object Oriented C++"
- If the function is intended to modify variables in the calling program, these variables cannot be passed by value, since the function obtains only a copy of the variable. However, either a reference argument or a pointer can be used in this situation.

# 2
- This data is a precurosor to Pointers to functions
- first is a review of passing by reference
- then passing by reference will be compared to passing pointers

# 3 
- notice the parameter is REFERENCING a variable to pass into the 'change' function. 
- that variable only happens to be the data class member
- this pass by reference is appropriate as long as the variable never needs to be modified during program runtime.