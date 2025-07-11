/* Program demonstrating how to pass a struct by reference and modify its data

    - When a struct is passed by reference to a function, any changes made to its members directly affect the original struct object.
    - This avoids creating a copy and allows the function to modify the original data.
    - In this program, the 'update()' function modifies the 'age' field of the passed 'student' struct.
*/
.

#include <iostream>
#include <string>
using namespace std;

// Define a struct to hold student information

struct student {
    string name;
    int age;
};

// Function that updates the student data by reference

void update(student &s){
   s.age++;
} 

int main(){
    
    student s1;
    s1.name = "Murugan";
    s1.age = 6;
    
    cout<<"Name : "<<s1.name<<endl<<"Age : "<<s1.age<<endl;
    
    // Pass struct to function by reference

    update(s1);
    
    cout<<"Name : "<<s1.name<<endl<<"Age : "<<s1.age<<endl;
    
    return 0;
}
