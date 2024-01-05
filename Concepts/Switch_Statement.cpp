#include <iostream>
using namespace std;

int main () {

    char ch = '1';
    int num = 1;

    // Switch only takes int/ char.
    switch (ch) {

        // Multiple State ment can be executed
        case 1: cout << "First" << endl;
                cout << "First again" << endl;
            break;

        case 2: cout << "Second" << endl;
            break;

        // Nested Switch

        case '1': switch(num) {
                    case 1: cout << "The value of num is = " << num << endl;
                    break;
                }
                break;

        default: cout << "It is a default case" << endl;
    }

    return 0;

}

/* Note - 
Use of continue in case of switch is invalid because
it is designed to be used within loops.

Also switch case is a conditional block not a loop.
*/ 

