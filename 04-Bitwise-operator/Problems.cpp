//
// Created by vssin on 08-07-2025.
//

#include <iostream>
using namespace std;

int main() {

    // Problem--> 1
    int a,b =1;
    a=10;
    if (++a) {
        cout << b << endl;
    }
    else {
        cout << b++ << endl;
    }

    // Problem--> 2
    int c=1;
    int d=3;
    if (c-- > 0 && ++d > 2) {
        cout << "Stage1-Inside If ";
    }
    else {
        cout << "Stage2-Inside If ";
    }
    cout << endl;
    cout << c <<" "<< d << endl;

    // Problem--> 3
    int e=1;
    int f=2;
    if (e-- > 0 || ++f > 2) {
        cout << "Stage1-Inside If ";
    }
    else {
        cout << "Stage2-Inside If ";
    }
    cout << endl;
    cout << e <<" "<< f << endl;

    // Problem--> 4
    int num=3;
    cout << (25*(++num));

    // Problem--> 5  (Understand in depth...)
    int i=1;
    int j=i++;
    int k=++i;
    cout << j << endl;
    cout << k << endl;

}