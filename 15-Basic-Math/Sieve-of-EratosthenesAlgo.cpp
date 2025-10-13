//
// Created by vssin on 13-10-2025.
//

/*
 * 🔢 Count Primes using Sieve of Eratosthenes
 * -------------------------------------------
 * This function counts the number of prime numbers less than a given integer n.
 *
 * ✅ Algorithm: Sieve of Eratosthenes
 * Time Complexity: O(n log log n)
 * Space Complexity: O(n)
 *
 * Example:
 * Input: n = 10
 * Output: 4   // primes are 2, 3, 5, 7
 */

#include <iostream>
#include <vector>
using namespace std;

int countPrimes(int n) {
    if (n <= 2)
        return 0;

    // Step 1: Create a boolean vector initialized as true
    vector<bool> isPrime(n, true);
    isPrime[0] = isPrime[1] = false;

    // Step 2: Mark non-primes using the sieve algorithm
    for (int i = 2; i * i < n; i++) {
        if (isPrime[i]) {
            for (int j = i * i; j < n; j += i) {
                isPrime[j] = false;
            }
        }
    }

    // Step 3: Count remaining primes
    int count = 0;
    for (int i = 2; i < n; i++) {
        if (isPrime[i])
            count++;
    }

    return count;
}

int main() {
    int n = 30;
    cout << "Number of primes less than " << n << " is: " << countPrimes(n) << endl;
    return 0;
}
