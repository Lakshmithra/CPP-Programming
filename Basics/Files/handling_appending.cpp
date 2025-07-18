#include<iostream>
#include<fstream>
using namespace std;

int main(){

    ofstream fout("filehandling.cpp",ios::app);
    if(!fout){
        cout<<"File not opened ";
        return 1;
    }
    fout<<"Hello World";
    fout.close();

    return 0;

}

/*
    Append Mode in File Handling (ios::app):

    - When opening a file with ofstream, by default it opens in output mode (ios::out),
      which **overwrites** the existing content of the file.

    - To add new data **at the end of the file** without deleting existing content,
      open the file in **append mode** by specifying ios::app:

        ofstream fout("filename.txt", ios::app);

    - In append mode:
      * If the file exists, new data is written after the existing data.
      * If the file does not exist, it will be created.

    - This mode is useful when you want to keep all previous data and add more logs,
      entries, or information to the file without losing anything.

    - Remember to always check if the file opened successfully before writing.
*/
