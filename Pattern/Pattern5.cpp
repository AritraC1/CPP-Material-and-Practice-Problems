/*To Print -

*
**
***
****

*/

#include <iostream>
using namespace std;

int main (){
    int n, i;
    cin >> n;

    i = 1;
    while (i<=n) {
        // column
        int j = 1;

        while (j<=i){
            cout << "*";
            j = j+1;
        }
        cout << endl;
        i = i+1;
    }
    

}
