// Prime or not

#include <iostream>
using namespace std;

int main (){
    int i, n;
    cin >> n;

    i = 2;
    
    while (i < n){
        if (n % i == 0){
            cout << "Not Prime" << endl;
            return 0;
        }
        i = i + 1;
    }
    cout << "Prime" << endl;
    return 0;
}