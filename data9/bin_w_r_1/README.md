# 1
* Binary IO
 * from the book "Object Oriented C++"
 - You can write a few numbers to disk using formatted I/O, but if you’re storing a large amount
of numerical data it’s more efficient to use binary I/O, in which numbers are stored as they are
in the computer’s RAM memory, rather than as strings of characters. In binary I/O an int is
stored in 4 bytes, whereas its text version might be “12345”, requiring 5 bytes. Similarly, a
float is always stored in 4 bytes, while its formatted version might be “6.02314e13”, requiring
10 bytes.

# 2
- notice that you must use the ios::binary argument in the second parameter to write() and read() when
working with binary data.
- notice the pointer-casting (reinterperet_cast)... It doesn’t have any return type. It simply converts the pointer type.