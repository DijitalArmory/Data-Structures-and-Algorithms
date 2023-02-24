# 1 
- this data shows how to use the 'const' keyword on member functions.
- Note: - Member functions that do nothing but acquire data from an object are obvious candidates for being made const, because they don’t need to modify any data.


# 2 
- notice the shower function syntax signifies that the data mebers within the function body are now const members. 

- notice the 'add..' const member function's parameter, being a REFERENCE to (the class instance) object.

# 3
- also notice that the data members within the 'add...' function body are still const and cannot be modified if you tried to do so. 
- notice that the temporary variable of the class object type is what is returned, and has constant values
- another interesting note is that in the 'get' methods, return data members that arent const. Yet when they are called (in the main function in this case), they do not throw an error.
- This is because the initialized object(s) (in the main function in this case) have not been labeled as const either. 
- if the object were labeled as const when initialized (i.e. in the main function), then the 'get' methods (when called) would throw a compiler error

# 4
- the const object (ch4 in this case) also cannot call the 'add...' method without throwing a compiler error, because the 'add...' method returns an object, NOT a const object (as ch4 is) 
