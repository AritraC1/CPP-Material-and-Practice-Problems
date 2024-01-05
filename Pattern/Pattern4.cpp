/*To Print -

123
456
789

*/

#include <iostream>
using namespace std;

int main(){
    int n, i;
    cin >> n;

    i = 1;
    int count = 1;

    while (i<=n){
        // column
        int j = 1;
        while (j<=n){
            cout << count<<" ";
            count = count+1;
            j = j+1;
        }
        cout << endl;
        i = i+1;
    }
}