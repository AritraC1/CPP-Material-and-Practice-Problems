#include <iostream>
using namespace std;

int main(){
    // Fibonacci

    int n = 10;
    int a = 0;
    int b = 1;

    cout << a << " " << b << " ";

    for (int i = 1; i<=n; i++)
    {
        int c = a+b;
        cout << c << " ";
        a = b;
        b = c;
    }

}