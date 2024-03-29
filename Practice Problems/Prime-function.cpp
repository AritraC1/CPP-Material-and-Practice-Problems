// To check if a number is prime or not

#include <iostream>
using namespace std;

// Output: 1 -> Prime
// Output: 0 -> Not Prime
bool isPrime(int n){
    
    for (int i = 2; i<n; i++) {
        if(n%i == 0) {
            return 0;
        }
    }

    return 1;
}

int main() {

    int n;
    cin >> n;

    cout << isPrime(n);
    
}