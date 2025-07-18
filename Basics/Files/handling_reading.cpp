#include<iostream>
#include<string>
#include<fstream>
using namespace std;

int main(){

    ifstream fin("filehandling.cpp");
  
    if(!fin.is_open()){
        cout<<"File can't be opened";
        return 1;
    }

    string line;
    while(getline(fin,line)){
        cout<<line<<endl;
     }

     fin.clear();
     fin.seekg(0);

    while(fin>>line){
        cout<<line<<endl;
    }

    fin.close();

    return 0;

}
/*
  File Handling in C++: Basic Steps for Reading from a File
  
  1. Include the header <fstream> to enable file input/output operations.
  
  2. 'ifstream' is a class in the <fstream> library used for input file stream (reading files).
  
  3. Create an object of the 'ifstream' class to read from files.
     Syntax:
         ifstream objectName;                   // Declare object
         objectName.open("filename.txt");      // Open file separately
     Or combine both in one line (constructor style):
         ifstream objectName("filename.txt");  // Declare and open file
  
     - 'objectName' is an object name you can choose freely (like any variable name).
  
  4. Always check if the file opened successfully using:
         objectName.is_open()   // returns true if file is open
     or simply:
         if (objectName)        // stream objects can be used in boolean context
  
  5. There are two common ways to read from a file:
  
     a) Reading line by line using getline():
         - Syntax: getline(objectName, stringVariable);
         - Reads an entire line from the file (until newline character '\n').
         - Useful for reading text data preserving spaces and formatting.
         - Stops reading at the newline (does not include '\n' in the string).
     
     b) Reading word by word using extraction operator (>>):
         - Syntax: objectName >> variable;
         - Reads input separated by whitespace (spaces, tabs, newlines).
         - Stops reading at whitespace, useful for tokenized data like words or numbers.
  
  6. When reading the entire file using one method until EOF, the stream enters an end-of-file state.
     To read the file again using a different method or multiple times:
         - Use objectName.clear();   // Clears error flags like EOF and fail states.
         - Use objectName.seekg(0);  // Resets the file read pointer to the beginning of the file.
  
  7. Close the file after reading:
         objectName.close();
     - Closing releases system resources.
  
  Notes:
  - If the file does not exist or cannot be opened, is_open() returns false.
  - Always check before reading to avoid runtime errors.
  */


