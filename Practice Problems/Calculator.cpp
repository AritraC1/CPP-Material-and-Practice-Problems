// Calculator

#include <iostream>
#include <math.h>
using namespace std;

int main (){
    int a,b;
    cout << "Enter the values = ";
    cin >> a >> b;

    int op;
    cout << "Operations :-" << endl;
    cout << "1. Addition" << endl;
    cout << "2. Subtraction" << endl;
    cout << "3. Multiplication" << endl;
    cout << "4. Division" << endl;
    cout << "Enter the number of the operation ypu want to perform = ";
    cin >> op;

    switch (op) {
        case 1 : cout << "The addition of the given number is = " << a+b << endl;
        break;
        
        case 2 : cout << "The subtraction of the given number is = " << a-b << endl;
        break;

        case 3 : cout << "The multiplication of the given number is = " << a*b << endl;
        break;
        
        case 4 : cout << "The division of the given number is = " << a/b << endl;
        break;
        
    }
}
