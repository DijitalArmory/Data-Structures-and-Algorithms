# 1
* Writing to a file and Reading from a file

-   // Writing to a file
    ofstream outfile1("outfile1.txt");
    outfile1 << "This is an ";
    outfile1 << "example of writing to ";
    outfile1 << "a file with embedded spaces";

    // Reading (extracting) FROM a file
    const int MAX = 80; 

    // set character buffer stream
    char buffer[ MAX ]; 

    // create file to be read into
    ifstream infile("infile.txt"); 


    while (infile.good()){ // until the end of the file AND while there  are no errors

        // read line text into a
        // character array (buffer) in which to store the data
        // &  maximum number of characters to extract
        infile.getline(buffer, MAX); 

        cout << buffer << endl; // display the extracted data 