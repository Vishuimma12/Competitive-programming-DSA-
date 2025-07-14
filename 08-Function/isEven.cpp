//
// Created by vssin on 14-07-2025.
//
#include <iostream>
using namespace std;

bool isEven(int a) {
    if (a&1) {
        return false;
    }
   return true;
}
int main() {
    int a;
    cout << "Enter an integer: ";
    cin >> a;
    bool ans = isEven(a);
    if (ans == 1) {
        cout << "Even";
    }
    else {
        cout << "Odd";
    }

    return 0;
}