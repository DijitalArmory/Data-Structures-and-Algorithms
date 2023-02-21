#1 
- To make it possible to use the homemade 'operator++()' in assignment expressions, we must provide a way for it to return a value.

- notice how a temporary variable was returned. 
- unary operator overloading with returned values allows for assignments to be possible (x = ++y).
- a method returning "void" does not allow for assignments with overloaded unary operators