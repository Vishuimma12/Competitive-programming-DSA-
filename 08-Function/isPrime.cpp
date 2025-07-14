//
// Created by vssin on 14-07-2025.
//
#include <iostream>
using namespace std;

bool isPrime(int n) {
    for (int i=2; i<n; i++) {
        if (n%i==0) {
            return false;
        }
    }
    return true;
}
int main() {
    int n;
    cout << "Enter number: ";
    cin >> n;
    if (isPrime(n)==true) {
        cout << n << " is a prime number." << endl;
    }
    else {
        cout << n << " is not a prime number." << endl;
    }
}