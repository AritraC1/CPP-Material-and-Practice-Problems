// Decimal to Binary Converter and Vice-versa

#include <iostream>
#include <math.h>
using namespace std;

int main (){
    // Taking inputs

    cout << "Choose the conversion :- " << endl;
    cout << "1. Decimal To Binary" << endl;
    cout << "2. Binary to Decimal" << endl;
    cout << "3. Exit\n" << endl;

    int option;
    cout << "Enter the option --> ";
    cin >> option;

    // Decimal to Binary
    if (option == 1) {
        int n;
        cout << "Enter Decimal Number = ";
        cin >> n;

        int ans = 0;
        int i = 0;

        while (n!=0) {
            int bit = n&1;
            ans = (bit*pow(10, i)) + ans;

            n = n>>1;
            i++;
        }

        cout << "Decimal to Binary conversion is = " << ans << endl;

    }

    // Binary to Decimal
    else if (option == 2) {
        int n;
        cout << "Enter Binary Number = ";
        cin >> n;

        int i = 0, ans = 0;

        while (n!=0) {
            int digit = n%10;
            if (digit == 1) {
                ans = ans + pow(2, i);
            }

            n = n/10;
            i++;
        }

        cout << "Binary to Decimal conversion is = " << ans << endl;
        
    }

    // Exit Program
    else {
        cout << "Exit Program....";
        exit(0);
    }

}