#include <iostream>
using namespace std;

// output 1 -> even
// output 0 -> odd
bool isEven (int a) {
    // odd
    if(a&1) {
        return 0;
    }
    // even
    return 1; // else is not required
}

int main() {
    int num;
    cin >> num;

    if (isEven(num)) {
        cout << "The number is even" << endl;
    }

    else {
        cout << "The number is odd" << endl;
    }

    return 0;
}