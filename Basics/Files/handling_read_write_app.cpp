#include<iostream>
#include<string>
#include<fstream>
using namespace std;

int main(){

    fstream file ("filehandling.cpp",ios::in | ios::out | ios::app);

    if(!file.is_open()){
       cout<<"File can't be opened !";
       return 1;
    }

    string line;
    while(getline(file , line)){
        cout<<line<<endl;
    }

    file.clear();
    file.seekp(0, ios::end);

    file<<"\nThank you Universe !"<<endl;
    file.close();

    return 0;

}

/*
    File Handling in C++: Reading and Appending Using fstream

    1. Include the necessary headers:
       - <iostream> for input/output
       - <string> for string operations
       - <fstream> for file stream classes (ifstream, ofstream, fstream)

    2. Use the 'fstream' class when you want both reading and writing from/to a file.
       Syntax:
           fstream objectName("filename", mode);
       Example:
           fstream file("file.txt", ios::in | ios::out | ios::app);

    3. File open modes used:
       - ios::in    → open file for reading
       - ios::out   → open file for writing
       - ios::app   → ensures all new data is added at the end of the file (append mode)
       - These modes can be combined using the bitwise OR operator '|'.
       - ios::out is required to enable writing, even in append mode.
       - ios::app ensures data is not overwritten.
       - If the file doesn’t exist, it will be created automatically.
       - You can give any name to the fstream object (like file, fout, dataFile, etc.).

    4. Check if the file opened successfully using:
           if (!file.is_open())

    5. Read from the file using a loop with getline():
           string line;
           while (getline(file, line)) {
               cout << line << endl;
           }

    6. After reading, clear EOF and error flags using:
           file.clear();
       This is necessary because reading moves the internal pointer to the end of the file.

    7. Move the write pointer to the end using:
           file.seekp(0, ios::end);
       This ensures writing starts exactly at the end (even after reading).

    8. Write (append) to the file using:
           file << "your message";

    9. Always close the file after operations using:
           file.close();
*/


