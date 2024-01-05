/*To Print -

1
2 3
4 5 6
7 8 9 10

*/

#include <iostream>
using namespace std;

int main (){
    int n, i;
    cin >> n;

    i = 1; // row
    int count = 1;
    
    while(i<=n){
        // column
        int j = 1;
        while (j<=i){
            cout << count << " ";
            count = count+1;
            j = j+1;
        }
        cout << endl;
        i = i +1;
    }
}