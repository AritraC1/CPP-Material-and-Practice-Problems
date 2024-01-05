// Sum of n numbers from 1

#include <iostream>
using namespace std;

int main (){
    int n, num, sum;
    cin >> n;

    num = 1;
    sum = 0;

    while (num<=n){
        sum = sum + num;
        num = num + 1;
    }
    cout << sum << endl;
}