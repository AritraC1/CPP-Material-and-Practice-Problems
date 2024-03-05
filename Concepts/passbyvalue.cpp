// Pass By Value

/*
The compiler copies the value of an argument in a calling function to a corresponding non-pointer or non-reference 
parameter in the called function definition.
*/

#include <iostream>
using namespace std;

void dummy(int n) {
    cout << "n is " << n << endl;

}

int main () {
    int n;
    cin >> n;

    dummy(n);

    cout <<"Number is = "<< n << endl;

    return 0;
}
