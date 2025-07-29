// Program to demonstrate C-style file handling in C++ using <cstdio> functions like fopen, fgets, fgetc, etc.

#include <iostream>
#include <cstdio>
using namespace std;
int main(){

    FILE *f 
    
    f = fopen("Example.txt" , "w");

    if(f == NULL){
        cout<<"File can't be opened !";
        return 1;
    }

    fprintf(f , "Hello world !\n");

    fclose(f);

    f = fopen("Example.txt" ,"r");
    
    if(f == NULL){
        cout<<"File can't be opened !";
        return 1;
    }

    char data[50];

    while(fgets(data , 50 , f) != NULL){
        cout<<data;
    }

    fclose(f);

    f = fopen("Example.txt" ,"a");
    
    if(f == NULL){
        cout<<"File can't be opened !";
        return 1;
    }

    fprintf(f , "Hello Universe !");

    fclose(f);

    f = fopen("Example.txt" ,"r");
    
    if(f == NULL){
        cout<<"File can't be opened !";
        return 1;
    }

    char ch;

    while((ch = fgetc(f)) != EOF){
        cout<<ch;
    }

    fclose(f);

}

/*
    C-style File Handling in C++ (using <cstdio>)

    - In C++, we can still use C-style file functions like:
        fopen(), fprintf(), fgets(), fgetc(), fclose()

    - These functions are available through the <cstdio> header.

    Reading from Files – Why We Use NULL and EOF:

    1. fgets() → check with '!= NULL'
       - fgets() reads a line of text into a character array.
       - It returns a pointer to the array if reading is successful.
       - If it reaches the end of the file or fails, it returns NULL.
       - So we check:
             while (fgets(buffer, size, file) != NULL)

    2. fgetc() → check with '!= EOF'
       - fgetc() reads one character at a time and returns it.
       - When there is nothing left to read, it returns EOF (End Of File).
       - So we check:
             while ((ch = fgetc(file)) != EOF)

    Summary:
    - Use '!= NULL' when using fgets() to read lines.
    - Use '!= EOF' when using fgetc() to read characters.
    - Always include <cstdio> to use these C-style file functions in C++.
*/

