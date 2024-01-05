/* To print - 

AAA
BBB
CCC

*/

#include <iostream>
using namespace std;

int main(){
    int i, n;

    i = 1;
    n = 3;

    while (i<=n){
        // column
        int j = 1;

        while (j<=n){
            cout << (char)(65+i-1) << " ";
            j = j+1;
        }
        cout << endl;
        i = i + 1;
    }
    return 0;
}