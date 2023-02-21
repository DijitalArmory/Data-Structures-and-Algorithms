# 1 
- this data is a class whos object is implimented as an array that checks for it's boundries. 
- The array holds 100 elements.
- the aray is iterated through (0-100) counting each element and multiplying its count by 10
- I.E. 0x10=0, 1x10=10, 2x10=20, etc., etc.
# 2
- The subscript operator, [], which is normally used to access array elements
- this is a precursor, if you will, to the overloaded subscriptor operator. 
- To be useful, the overloaded subscript operator must return by reference
- this data shows a class, whose data member is only an array
- the methods in the class are for add elements to the array. 
these methods also check the boundries of the array.
- The data is inserted into the safe array with the putel() member function, and then displayed with getel(). This implements a safe array you’ll receive an error message if you attempt to use an out-of-bounds index. However, the format is a bit crude.

# 3
- notice when the display method is called for the first object (in the main function), it outputs arbitrary integers (because the insert method was not called for the object first). --- NOT GOOD

- notice when the display method is called for the second object (in the main function), the output is incremented by 10, from 0 - 1000 (iterated from zero to 100), no matter what integer value is inserted into the 'insert' method... --- NOT IDEAL for real life
