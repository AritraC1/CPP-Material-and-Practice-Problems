/* To Print - 

      *
    * *
  * * *
* * * * 

*/

// For row i we are first printing n-i spaces and then printing i stars

#include <iostream>
using namespace std;

int main(){
    int n;
    cin >> n;

    int i = 1; 

    while (i<=n)
    {
        // spaces
        int space = n-i;
        while (space)
        {
            cout << " ";
            space = space - 1;
        }

        // stars
        int j = 1;
        while (j<=i)
        {
            cout << "*";
            j = j + 1;
        }
        cout << endl;
        i = i+1;
    }
}