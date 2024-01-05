#include <iostream>
using namespace std;

int main(){
    // Prime number

    int n;
    cout << "Enter the value of n = ";
    cin >> n;

    bool isPrime = 1;

    for (int i = 2; i < n; i++)
    {
        if (n % i == 0) // rem = 0, Not prime
        {
            isPrime = 0;
            break;
        }
    }

    if (isPrime == 0) {
        cout << "Not Prime";
    }

    else {
        cout << "Prime";
    }
}



    
