#include<iostream>
#include<fstream>
using namespace std;
int main(){

    ofstream fout ("filehandling.cpp");
  
    if(fout.is_open()){
        cout<<"File is opened ";
        fout<<"Hello Universe !\n";

    }
    else{
        cout<<"File is not opened ";
    }

    fout.close();

    return 0;

}
/*
    File Handling in C++: Basic Steps for Writing to a File

    1. Include the header <fstream> to enable file operations.

    2. 'ofstream' is a class in the <fstream> library used for output file stream (writing files).

    3. Create an object of the 'ofstream' class to write to files.
       Syntax:
           ofstream objectName;                   // Declare object
           objectName.open("filename.txt");      // Open file separately
       Or combine both in one line (constructor style):
           ofstream objectName("filename.txt");  // Declare and open file

       - 'objectName' is an object name you can choose freely (like any variable name).

    4. By default, opening a file with 'ofstream' overwrites the existing file content.
       To append data instead of overwriting, open the file with the ios::app mode:
           ofstream objectName("filename.txt", ios::app);

    5. Always check if the file opened successfully using:
           objectName.is_open()   // returns true if file is open
       or simply:
           if (objectName)        // stream objects can be used in boolean context

    6. Write data to the file using the insertion operator '<<':
           objectName << "Your text here";

    7. Close the file using:
           objectName.close();
       - Closing is important to save data properly and free resources.

    Notes:
    - If the specified file does not exist, it will be created.
    - If the file exists, its contents will be overwritten unless opened in append mode (ios::app).
*/
