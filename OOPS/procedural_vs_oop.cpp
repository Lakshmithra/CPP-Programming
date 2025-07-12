#include<iostream>
using namespace std;

/* Procedural Programming Part

  Functions to calculate the area and perimeter of a square
  Takes the side as input and returns the area and perimeter
*/

int area(int s){
    return s * s;
}

int perimeter (int s){
    return 4 * s;
}

/* Object-Oriented Programming Part

   Class definition for a square
   This class contains data (side of the square) and member functions to calculate area and perime
*/
class square {
    
    // Private member variable to store the side of the square
    
    private:
     int s;
     
    public :
    
     // Member function to set the side of the square
     
       void getside(int side){
           s = side;
       }
       
     // Member function to calculate area using the stored side

       int area(){
           return s * s;
       }
       
       // Member function to calculate perimeter using the stored side

       int perimeter(){
           return 4 * s;
       }
};
int main(){
    
    // Using procedural approach
    // We directly call the functions by passing the value of side

    int side = 5;
    int a = area(side);
    int p = perimeter(side);
    cout<<"Area : "<<a<<endl;
    cout<<"Perimeter : "<<p<<endl;
    
    // Using object-oriented approach
    // We create an object of the square class and use its methods

    square sq;
    sq.getside(side);     // Set the side value inside the object

    // We call the object's own methods to get area and perimeter
    // The object uses its internal data, so no need to pass side again

    cout<<"Area : "<<sq.area()<<endl;
    cout<<"Perimeter : "<<sq.perimeter()<<endl;
    
    return 0;
}

/*
    Procedural vs OOP – Spark Analogy (Cooking)
    
    Procedural:
    Every time you cook, you gather ingredients, follow the recipe, and do everything from scratch.
    You manage both the ingredients (data) and the steps (logic) manually.
    
    OOP:
    You hire a personal chef. You give them the recipe once.
    From then on, they store the ingredients and handle the cooking when asked.
    
    Key Spark:
    Procedural = You do all steps every time (manual cooking).
    OOP        = Object (chef) stores and handles both data and actions for you.
*/
