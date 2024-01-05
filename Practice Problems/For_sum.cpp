#include <iostream>
using namespace std;

int main(){
    // Sum of 1 to n

    int n = 1;
    cout << "Enter the value of n = ";
    cin >> n;

    int sum = 0;

    for (int i = 1; i<=n; i++)
    {
        sum = sum + i;
    }
    cout << "Sum of the numbers from 1 to " << n << " is = " << sum << endl;
}