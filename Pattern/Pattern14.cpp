/* To print - 

A
B B
C C C

*/

#include <iostream>
using namespace std;

int main(){
    int i, n;
    n = 3;

    i = 1;
    while (i<=n){
        // column
        int j = 1;

        while(j<=i){
            cout << char('A'+i-1) << " ";
            j = j+1;
    }
    cout << endl;
    i = i+1;
    }
}