//
// Created by vssin on 10-07-2025.
//
#include <iostream>
#include <bitset>
using namespace std;

int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;

    // Use 8-bit representation for example
    const int BITS = 8;

    if (n >= 0) {
        // Positive number: simple binary
        bitset<BITS> binary(n);
        cout << "Binary (unsigned) : " << binary << endl;
    } else {
        // Negative number: 2's complement
        int twoComp = (1 << BITS) + n; // 2^BITS + n
        bitset<BITS> binary(twoComp);
        cout << "Binary (2's complement of " << n << "): " << binary << endl;
    }

    return 0;
}
