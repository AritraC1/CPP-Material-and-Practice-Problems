// To check if a number is -ve, +ve or 0

#include <iostream>
using namespace std;

int main(){
    int num;
    cin >> num;

    if (num>0) {
        cout << "+ve" << endl;
    }

    else if (num<0) {
        cout << "-ve" << endl;
    }

    // Default Case
    else {
        cout << "0" << endl;
    }
}