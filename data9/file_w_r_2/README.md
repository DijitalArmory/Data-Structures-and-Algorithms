# 1 
* Writing to a file and readin from a file w/embedded spaces
- When you run the program, the lines of text are written to a file. Each one is specifically terminated with a newline (‘\n’)
character. 
-Note: that these are char* strings, not objects of the string class. Many stream operations
work more easily with char* strings.

# 2
- you will need to use the 'getline()' method to extract the char* strings from the file when reading

# 2:
- NOTE: using 'while(!infile.eof())' would require that every char* string be terminated with a newline character (\n).
- also, using this would ONLY check for the 'eof', and would not check for any errors during execution. 