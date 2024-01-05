/*To Print -

1
22
333
4444

*/

#include <iostream>
using namespace std;

int main (){
    int n, i;
    cin >> n;

    // row
    i = 1;
    
    while(i<=n){
        // column
        int j = 1;
        while (j<=i){
            cout << i << " ";
            j = j+1;
        }
        cout << endl;
        i = i +1;
    }
}