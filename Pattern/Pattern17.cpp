/* To print - 

D
C D
B C D
A B C D

*/

#include <iostream>
using namespace std;

int main(){
    int i, n;
    cin >> n;

    i = 1;
    while (i<=n){
        // column
        int j = 1;
        char ch = 'A' + n - i;

        while(j<=i) {
            cout << ch << " ";
            ch = ch + 1;
            j = j+1;
    }
    cout << endl;
    i = i+1;
    }
}