//
// Created by vssin on 05-07-2025.
//
#include <iostream>
using namespace std;

int main() {
    char a;
    cout<<"Enter a character or digit: ";
    cin>>a;
    int ch = a;
    if (ch>=97 && ch<=122) {
        cout<<"This is Lowercase Letter ";
    }
    else if (ch>=65 && ch<=90) {
        cout<<"This is Uppercase Letter ";
    }
    else{
        cout<<"This is Digit";
    }
}