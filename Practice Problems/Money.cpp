// To count the number of notes required for an amount.

#include <iostream>
#include <math.h>
using namespace std;

int main() {
    /*

    // Using Loop (For)

    int num = 1330;
    // cin >> num;

    int arr[9] = {100, 50, 20, 1};

    for (int i = 0; i<9; i++) {
        cout << arr[i] << " Note: " << num/ arr[i] << endl;
        num = num % arr[i];
    }
    */

    // Using Switch Statement

    int amount;
    cout << "Enter the amount = ";
    cin >> amount;

    switch (amount >= 100) {
        case 1:cout << "100 note: " << amount / 100 << endl;
               amount = amount % 100;
               break; 
    }

    switch (amount >= 50) {
        case 1:cout << "50 note: " << amount / 50 << endl;
               amount = amount % 50;
               break; 
    }

    switch (amount >= 20) {
        case 1:cout << "20 note: " << amount / 20 << endl;
               amount = amount % 20;
               break; 
    }

    switch (amount >= 1) {
        case 1:cout << "1 note: " << amount / 1 << endl;
               amount = amount % 1;
               break; 
    }



}