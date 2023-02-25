# 1
* The NEW Operator
- The versatile "new" operator obtains memory from the operating system and returns a pointer to its starting
point
- this is how to dynamically allocate memory from the heap
- allocating memory from the heap does not require a constant to be set in order to allocate memory, like say...
- array[ CONSTANT_VALUE ] 

# 2
- The 'new' operator returns a pointer to a section of memory just large enough to hold the reuired amount of bytes given to it. 
- When finished computing the allocated memory, the allocated memory is destroyed using the 'delete'
operator (to prevent memory leak)