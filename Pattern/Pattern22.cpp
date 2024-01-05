/* To print - 

      1
    1 2 1
  1 2 3 2 1
1 2 3 4 3 2 1

*/

#include <iostream>
using namespace std;

int main(){
    int n;
    cin >> n;

    int i = 1;
    while (i<=n)
    {
        // Spaces (Triangle 1)
        int space = n-i;
        while (space)
        {
            cout << " " << " ";
            space = space - 1;
        }

        // Print triangle 2
        int j = 1;
        while (j<=i)
        {
            cout << j << " ";
            j = j+1;
        }

        // Print triangle 3
        int start = i-1;
        while(start)
        {
            cout << start << " ";
            start = start - 1;
        }

        cout << endl;
        i = i+1;
    }
}