# 1
* Writing to and Reading from a stream object one character at a time

- string str = "This is a good example of writing (putting in)"
    "and reading )(extracting from) a stream object (i.e. file)"
    "doing so one character at a time.";

    // Writing TO a stream object
    ofstream outfile1("outfile1.txt");
    
    ifstream infile("infile.txt");
    ofstream outfile2("outfile2.txt");
    for (int i = 0; i <= str.size(); i++){
        outfile1.put(str[i]);   // write data to outfile one character at a time
        
        // Reading FROM a stream object
        while(infile){
            infile.get(str[i]); // extract data into input one character at a time 
        }
    }