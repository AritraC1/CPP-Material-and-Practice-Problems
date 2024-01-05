/* To print - 

1
2 3
3 4 5
4 5 6 7

*/

// Method - 1

#include <iostream>
using namespace std;

int main(){

    int i, n;
    cin>> n;

    i = 1;

    while (i<=n){
        // column
        int j = 1;
        int count = i;

        while (j<=i) {
            cout << count << " ";
            count = count + 1;
            j = j + 1;
        }
        cout << endl;
        i = i + 1;
    }

}

// Method - 2 (without using an extra variable)
/*

#include <iostream>
using namespace std;

int main(){
    int i, n;
    cin>> n;

    i = 1;

    while (i<=n){
        // column
        int j = i;
        
        while (j<i*2) {
            cout << j << " ";
            j = j + 1;
        }
        cout << endl;
        i = i +1;
    }

}

*/
