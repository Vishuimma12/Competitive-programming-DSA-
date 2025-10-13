//
// Created by vssin on 13-10-2025.
// File: gcd.cpp
//
// 🧮 Program: Find the Greatest Common Divisor (GCD)
// ---------------------------------------------------
// The GCD (or HCF – Highest Common Factor) of two integers
// is the largest number that divides both numbers exactly.
//
// ✅ Approaches:
//   1. Recursive Euclidean Algorithm
//   2. Iterative Euclidean Algorithm
//
// 🕒 Time Complexity: O(log(min(a, b)))
// 💾 Space Complexity:
//      - Recursive: O(log(min(a, b))) due to call stack
//      - Iterative: O(1)
//

#include <iostream>
using namespace std;

// Recursive function to find GCD using Euclidean algorithm
int gcdRecursive(int a, int b) {
    if (b == 0)
        return a;
    return gcdRecursive(b, a % b);
}

// Iterative version of GCD
int gcd(int a, int b) {
    while (b != 0) {
        int temp = b;    // Step 1: store b temporarily
        b = a % b;       // Step 2: assign remainder to b
        a = temp;        // Step 3: assign old b to a
    }
    return a;            // When b becomes 0, a is the GCD
}

int main() {
    int a = 48, b = 18;
    cout << "🔹 Iterative GCD of " << a << " and " << b << " = " << gcd(a, b) << endl;

    int c = 24, d = 72;
    cout << "🔹 Recursive GCD of " << c << " and " << d << " = " << gcdRecursive(c, d) << endl;

    return 0;
}
