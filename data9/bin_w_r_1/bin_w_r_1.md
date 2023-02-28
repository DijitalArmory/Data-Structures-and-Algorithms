# 1
* Writing and reading binary streams
- 
/*
    int buff[MAX];
    for(int j=0; j<MAX; j++) 
    buff[j] = j;    //fill buffer with data

    //create output stream
    ofstream os("edata.dat", ios::binary);

    //write to it
    os.write( reinterpret_cast<char*>(buff), MAX*sizeof(int) );

    os.close(); //must close it

    for(int j=0; j<MAX; int buff[MAX];
    for(int j=0; j<MAX; j++) 
    buff[j] = j;    //fill buffer with data

    //create output stream
    ofstream os("edata.dat", ios::binary);

    //write to it
    os.write( reinterpret_cast<char*>(buff), MAX*sizeof(int) );

    os.close(); //must close it

    for(int j=0; j<MAX; j++){
        buff[j] = 0;    //erase buffer
    } 
    
    //create input stream
    ifstream is("edata.dat", ios::binary);

    //read from it
    is.read( reinterpret_cast<char*>(buff), MAX*sizeof(int) );

    for(int j=0; j<MAX; j++) //check data
    if( buff[j] != j )
    { cerr << "Data is incorrect\n"; return 1; }
    cout << "Data is correct\n";
    j++){
        buff[j] = 0;    //erase buffer
    } 
    
    //create input stream
    ifstream is("edata.dat", ios::binary);

    //read from it
    is.read( reinterpret_cast<char*>(buff), MAX*sizeof(int) );

    for(int j=0; j<MAX; j++) //check data
    if( buff[j] != j )
    { cerr << "Data is incorrect\n"; return 1; }
    cout << "Data is correct\n";
*/