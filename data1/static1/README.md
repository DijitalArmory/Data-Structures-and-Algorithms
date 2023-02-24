# 1
- Note: all class instances (objects) are NOT copies of the class, 
but are created objects given their own space in memory. 
- However, all objects SHARE the class methods, as the class methods are created and stored in memory only once. 
- this can become something to consider when implementing concurrency/threading

# 2
- An amendment to the above note is that, if a data item is declared as 'static', then only one such item is created for the entire class, no matter how many objects there are

# 3 
* Static data member usefulness
- A static data item is useful when all objects of the same class must share a common item of information.

# 4 
* Notes on static members
- visible only within the class, but its lifetime is the entire program
- continues to exist even if there are no objects of the class
- while a normal static variable is used to retain information between calls to a function, static class member data is used to share information among the objects of a class.

# 5
- notice the declaration and initialization locations.
- the declaration is in the private section inside the class, as most/many normal data members are. 
However, the initialization is outside of the class, as this is the required way of doing it. 
- ALSO notice that each object recognizes (and can query) the static variable's value each time an object is added...
(
    default copy constructor objects count as one whole object
)
- Putting the definition of static member data outside the class also serves to emphasize that the memory space for such data is allocated only once before the program starts to execute