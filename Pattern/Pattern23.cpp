/* To print - 

1 2 3 4 5 5 4 3 2 1
1 2 3 4 * * 4 3 2 1
1 2 3 * * * * 3 2 1
1 2 * * * * * * 2 1
1 * * * * * * * * 1

*/

#include <iostream>
using namespace std;

int main(){
    int n;
    // cin >> n;

    n = 5;

    int i = 1;
    while (i<=n)
    {
        // Triangle 1
        int j = 1;
        while (j<=n-i+1)
        {
            cout << j << " ";
            j = j+1;
        }
        // Triangle 2 (Stars)
        j = 1;
        while (j <= (i-1)*2)
        {
            cout << "*" << " ";
            j = j + 1;
        }

        // Triangle 3
        j = n-i+1;
        while (j>=1)
        {
            cout << j <<" ";
            j = j - 1;
        }
        cout << endl;
        i = i+1;
    }
}