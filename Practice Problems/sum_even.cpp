// Sum of all even numbes

#include <iostream>
using namespace std;

int main (){
    int i, n, sum;
    cin >> n;

    i = 0;
    sum = 0;

    while (i<=n) {
        sum = sum + i;
        i = i + 2;
    }
    cout << sum << endl;    
}