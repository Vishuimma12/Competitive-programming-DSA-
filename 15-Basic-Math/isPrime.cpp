//
// Created by vssin on 13-10-2025.
// File: isPrime.cpp
//
// 🔢 Program: Check if a number is Prime
// --------------------------------------
// A prime number is a number greater than 1
// that has no positive divisors other than 1 and itself.
//
// ✅ Algorithm:
//   1. If n <= 1 → not prime
//   2. Check divisibility from 2 to √n
//   3. If divisible by any number → not prime
//   4. Otherwise → prime
//
// 🕒 Time Complexity: O(√n)
// 💾 Space Complexity: O(1)
//

#include <iostream>
#include <cmath>
using namespace std;

// Function to check if a number is prime
bool isPrime(int n) {
    if (n <= 1)
        return false;

    // Only check up to sqrt(n)
    for (int i = 2; i <= sqrt(n); i++) {
        if (n % i == 0)
            return false;
    }
    return true;
}

int main() {
    int n = 20;

    if (isPrime(n))
        cout << n << " is a prime number." << endl;
    else
        cout << n << " is not a prime number." << endl;

    return 0;
}
