/* Program to demonstrate basics of bitwise operators
   Bitwise operators perform operations directly on the binary representations of integers.
   Bitwise operators are useful to see how numbers and data stored and work inside the computer using bits.
*/

#include<iostream>
using namespace std;
int main(){

     int a = 5;     // 0101
     int b = 10;   // 1010

     // Bitwise AND - & (ampersand)

     int AND = a & b;  //0000 - 0
     cout<<"Bitwise AND : "<<AND<<endl;

     // Bitwise OR - | (single pipe line).It works bit by bit, from right to left, but each bit is treated separately.
    // It compares each bit in the same position of two numbers. There is NO carry like in regular addition.

     int OR = a | b;  //1111 - 15
     cout<<"Bitwise OR  : "<<OR<<endl;

     // Bitwise XOR - ^ (Caret - bitwise exclusive OR). XOR gives 1 if the two bits are different, and 0 if they are the same.

     int XOR = a ^ b;   //1111 - 15
     cout<<"Bitwise XOR : "<<XOR<<endl;

     // Bitwise NOT - ~ (tilde).Bitwise NOT flips every bit: 1 becomes 0, and 0 becomes 1.
    // Formula : [~x = -(x + 1)]

     int n1 = ~a , n2 = ~b;
     cout<<"Bitwise NOT of a : "<<n1<<endl;   // 1010
     cout<<"Bitwise NOT of b : "<<n2<<endl;   //0101

     /* Left shift (<<) moves bits to the left (adds zeros at the end - multiplies by 2)
       right shift (>>) moves bits to the right (drops bits from the end - divides by 2).
       Formula: a << n = a × 2ⁿ, a >> n = a ÷ 2ⁿ
    */

     int left1= a<<2 ;
     int right1 = b>>2;
     cout<<"Left shift of a  : "<<left1<<endl;
     cout<<"Right shift of b : "<<right1<<endl;

     return 0;

}








