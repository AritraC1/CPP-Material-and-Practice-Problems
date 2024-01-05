/*To Print -

1234
1234
1234
1234

*/

#include <iostream>
using namespace std;

int main(){
    int n, i;
    cin >> n;

    i = 1;

    while (i<=n){
        // column
        int j = 1;

        while (j<=n){
            cout << j;
            j = j + 1;
        }
        cout << endl;
        i = i+1;
    }
}