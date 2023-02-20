# 1
- This data shows the basics of overloading unary operators
- notice the overloading method has no name but only the type (or void), the 'operator' keyword and the unary operator to impliment...
- I.E "void operator ++()"
- within the overload method's body is what is implimented using the operator...
- I.E. "I.E "void operator ++() {++var}" <-- increments var by one>

# 2
- NOTE: that the only fobj1.show_data();
    fobj2.show_data();way the compiler can distinguish between overloaded functions is by looking at the data types and the number of their arguments. In the same way, the only way it can distinguish between overloaded operators is by looking at the data type of their operands. If the operand is a basic type such as an int, as in ++intvar

    - also notice that once the method is called, the modified variable stays modified unless you impliment a method to reverse the unary overload method
    - notice that this operator requires no arguments when declared
    - also, you can’t use unary methods on objects in assignments because you are essentially telling the object you are assigning a value to the overloader method