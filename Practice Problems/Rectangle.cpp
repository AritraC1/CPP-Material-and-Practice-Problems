// WAP in C++ to print the following - 
/*

5 5 5 5
5     5
5     5
5     5
5     5
5 5 5 5

*/

#include <iostream>
using namespace std;

int main() {

    int n = 5;
    cout << "Input number is = " << n << endl;

    cout << endl;

    for (int i = 1; i<6; i++) {
        for (int j = 1; j<=4; j++) {

            if (i == 1 || i == n || j == 1 || j == 4) {
                cout << n;
            }

            else {
                cout << " ";
            }
        }
        cout << endl;
    }
    cout << endl;

}