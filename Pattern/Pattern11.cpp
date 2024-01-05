/* to Print - 

A B C
A B C
A B C

*/

# include <iostream>
using namespace std;

int main (){
    int i, n;
    cin >> n;

    i = 1;

    while (i<=n){
        // column
        int j = 1;

        while (j<=n){
            cout << (char)(64+j) << " "; //'A'+j-1 
            j = j+1;
        }
        cout << endl;
        i = i+1;
    }
}