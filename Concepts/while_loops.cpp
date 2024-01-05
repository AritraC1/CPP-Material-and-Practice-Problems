// Printing number from 1 to n

#include <iostream>
using namespace std;

int main(){
    int num, n;
    cin>> n;

    num = 1;

    while (num<=n){
        cout << num << " "; // To print horizontally
        // cout << num << endl;  to print veritically

        num = num + 1;
    }
}