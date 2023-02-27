# Strings w/out embedded spaces

    char ch;
    int j;
    double d;
    string str1;
    string str2;
    string str3;

    // Writing data TO a file
    ofstream outfile("outfile.txt");
    outfile << ch
    << j
    << ' '
    << d 
    << str1 
    << str2;

    // Reading data FROM a file
    ifstream infile("fdata.txt"); //create ifstream object
    infile >> ch >> j >> d >> str1 >> str2;

    // Writing the data into another file
    ofstream ofile("ofile.txt");
    ofile << ch // display the data read
    << j
    << d 
    << str1 
    << str2 
    << "\nData Read" << endl;