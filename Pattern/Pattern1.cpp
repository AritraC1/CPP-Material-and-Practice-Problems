/*To Print -

****
****
****
****

*/

#include <iostream>
using namespace std;

int main(){
    int n, i;
    cin >> n;

    i = 1;

    // Code chalana h till i reach n
    while (i<=n) {
        //  column
        int j = 1;

        while (j<=n){
            cout << "*";
            j=j+1; // Increasing number of columns
        }
        cout<<endl; // To go into next row
        i=i+1; // Increasing number of rows
    }
    
}