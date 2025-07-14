#include <iostream>
//
// Created by vssin on 14-07-2025.
//
#include <iostream>
using namespace std;

int factorial(int num) {
    int factorial = 1;
    for (int i=1; i<=num; i++) {
        factorial *= i;
    }
    return factorial;
}
int nCr(int n, int r) {
    int num= factorial(n);
    int deno =  factorial(r)*factorial(n-r);
    return num/deno;
}

int main() {
    int n;
    cout << "Enter an integer for 'n' : ";
    cin >> n;
    int r;
    cout << "Enter an integer for 'r' : ";
    cin >> r;

    int ans = nCr(n, r);
    cout << "Ans of nCr is: " << ans << endl;
    return 0;
}