#include <iostream>
using namespace std;

// Making Function
int power(int a, int b) {
    
    int ans = 1;

    for (int i = 1; i<=b; i++) {
        ans = ans * a;
    }

    return ans;

}


int main() {

    /*

    // Power of a b

    int a,b;
    cin >> a >> b;

    int ans=1;

    for (int i = 1; i<=b; i++){
        ans = ans * a;
    }

    cout << "The answer is = " << ans << endl;

    If we want to find the power the we have
    to run this program multiple times or 
    we have to write the same program with
    different variables. This makes the code
    bulky, buggy and unreadbale.*/

    // To prevent this "FUNCTIONS" are used.

    /* FUNCTIONS - 

    A function is a block of code which only 
    runs when it is called. You can pass data, 
    known as parameters, into a function.

    In other words a function is a block of 
    code for a well defined task. 

    Syntax - 

    void myFunction() {
        // code to be executed
    }

    */

    // Calling Functions

    int a, b;
    cin >> a >> b;    

    cout << power(a,b) << endl;

    return 0;
}