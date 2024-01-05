/* To Print - 

A
B C
C D E
D E F G

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

        while(j<=i){
            cout << char('A'+i+j-2) << " ";
            j = j+1;
    }
    cout << endl;
    i = i+1;
    }
}