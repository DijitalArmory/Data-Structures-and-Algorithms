# 1 
- this data will show the "default copy constructor." way of initializing class objects
- this is basically a different format of initializing data by reating a"Default Copy" of an already initialized object

# 2
- notice that in the class declaration, there is a default constructor and a two-argument constructor, but there is no one-argument constructor. This is key to the default copy constructor.
- notice that when the classes are implemeted (in this case, in the main function), the default copies have one-argument.
- these copies are copies of the object with two arguments. 
- both object-2 and object-3 are copies of object-1
I.E. obj1(1, 2), obj2(obj1), obj3 = obj1; 