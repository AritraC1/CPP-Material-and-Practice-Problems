/* To print -

A B C
D E F
G H I

*/

#include <iostream>
using namespace std;

int main() {
    int i, n;
    cin >> n;

    i = 1;
    int c = 'A';

    while (i<=n){
        // column
        int j = 1;

        while (j<=n){
            cout << (char)c << " ";
            c = c+1;
            j = j+1;
        }
        cout << endl;
        i = i+1;
    }
}