# 1
* from the book "Object Oriented C++"
- Watch Out for Destructors
In the sections “Passing by Reference” and “Returning a Value,” we discussed passing argu-
ments to a function by value and returning by value. These situations cause the destructor to be
called as well, when the temporary objects created by the function are destroyed when the
function returns. This can cause considerable consternation if you’re not expecting it. The
moral is, when working with objects that require more than member-by-member copying, pass
and return by reference—not by value—whenever possible.
