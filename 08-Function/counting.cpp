//
// Created by vssin on 14-07-2025.
//
#include <iostream>
using namespace std;

void counting(int n) {
    cout << "Counting till " << n << ": " << endl;
    for (int i = 1; i <= n; i++) {
        cout << i << endl;
    }
}

int main() {
    int number;
    cout << "Enter an integer: ";
    cin >> number;
    counting(number);
    return 0;
}