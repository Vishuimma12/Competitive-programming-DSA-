//
// Created by vssin on 05-07-2025.
//
#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    // cout <<"Value of n is "<< n << endl;

    if (n>0) {
        cout << "n is posative: "<< n << endl;
    }
    else {
        cout << "n is negative: "<< n << endl;
    }

// Here we check the value is greater thean, less than or equal to
    int a,b;
    cout << "Enter the value of a: ";
    cin >> a;
    cout<<"Enter the value of b: ";
    cin>>b;
    if (a>b) {
        cout << "a is greater than b" << endl;
    }
    else if (a<b) {
        cout << "a is less than b" << endl;
    }
    else {
        cout << "a is equal to b" << endl;
    }

    // Here we check a number is + , - , 0
    int num;
    cout << "Enter the value of num: ";
    cin >> num;
    if (a>0) {
        cout << "a is postive " << endl;
    }
    else if (a<0) {
        cout << "a is negative " << endl;
    }
    else {
        cout << "a is zero" << endl;
    }


}
// Note:- cin --> does not read space,enter & tab