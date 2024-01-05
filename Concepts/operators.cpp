// Bitwise

/*

AND : &
OR : |
NOT : ~
XOR : ^

*/

#include <iostream>
using namespace std;

int main(){
    int a = 4;
    int b = 6;

    int c = a & b;
    int d = a | b;
    int e = ~a;
    int f = a ^ b;

    cout << "a & b = " << c << endl;
    cout << "a | b = " << d << endl;
    cout << "~a = " << e << endl;
    cout << "a ^ b = " << f << endl;

    // Left Shift " << " 
    /* 
    Definition - 
    The left-shift operator causes the bits in shift-expression to be shifted 
    to the left by the number of positions specified by additive-expression. 
    The bit positions that have been vacated by the shift operation 
    are zero-filled.

    Syntax - 
    shift-expression << additive-expression

    Note - 
    Works on small numbers (the number becomes twice). 
    When using it in case of a large number it may sometimes work 
    but there are times (exception) where the number becomes negative.

    Trick (estimated) - 
    Gets multiplied 
    */
    int g = 3 << 2;
    cout << g << endl;

    // Right Shift " >> "
    /*
    Definition - 
    The right-shift operator causes the bit pattern in shift-expression
    to be shifted to the right by the number of positions specified by 
    additive-expression. For unsigned numbers, the bit positions
    that have been vacated by the shift operation are zero-filled.

    Syntax - 
    shift-expression >> additive-expression

    Note - 


    Trick (estimated) - 
    Gets divided by the no of times of additive expression
    */
    int h = 5 >> 2;
    cout << h << endl; 

    cout << (17<<1) << endl;
    cout << (17>>2) << endl;
    cout << (19<<1) << endl;
    cout << (21<<2) << endl;

    // Increment/ Decrement Operator

    /* 
    
    Increment Operator
    
    i++ : Post increment
    ++i : Pre increment 
    
    Decrement Operator
    
    i-- : Post increment
    --i : Pre increment

    */

   int i = 7;

   cout << (++i) << endl; // 8
   cout << (i++) << endl; // 8, i = 9
   cout << (i--) << endl; // 9, i=8
   cout << (--i) << endl; // 7, i= 7
}
