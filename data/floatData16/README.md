# 1 
- this data is a class whos object is implimented as an array that checks for it's boundries. 
- The array holds 100 elements.
- the aray is iterated through (0-100) counting each element and multiplying its count by 10
- I.E. 0x10=0, 1x10=10, 2x10=20, etc., etc.

# 2
- More preferrable than the previous subscript overloader precursor, you can use the same member function both to insert data into the safe array and to read it out. The secret is to return the value from the function by reference. This means we can place the function on the left side of the equal sign, and the value on the right side will be assigned to the variable returned by the function

# 3
- notice the assignment in the 'Insert' method...essentially, we place the function on the left side of the equal sign, and the value on the right side will
be assigned to the variable returned by the function