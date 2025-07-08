//
// Created by vssin on 08-07-2025.
//

#include <iostream>
using namespace std;

int main() {
    // for (_initilization_ ; _Condition_ ; _Updation_ ;){ _executeBody_ }
    cout << "Enter a number: ";
    int n;
    cin >> n;
    cout << "Print the counting till n"<< endl;

    for(int i=1; i<=n; i++) {
        cout << i << endl;
    }

    cout << "Another loop without proper forLoop syntax: " << endl;
    int i=1;
    for ( ; ; ) {
        if (i<=n) {
            cout<<i<<endl;
        }
        else {
            break;
        }
        i++;
    }

    cout << "Multiple initilization, Condition & Updation in forLoop: " << endl;
    for(int a=5 , b=7 ;a>=0 && b>=1; a--,b--) {
        cout << a << ' ' << b<< endl;
    }
}