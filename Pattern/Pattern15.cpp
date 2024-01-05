/* To print - 

A
B C
D E F
G H I J

*/

#include <iostream>
using namespace std;

int main(){
    int i, n;
    cin >> n;

    i = 1;
    char ch = 'A';
    while (i<=n){
        // column
        int j = 1;

        while(j<=i){
            cout << ch << " ";
            ch = ch+1;
            j = j+1;
    }
    cout << endl;
    i = i+1;
    }
}