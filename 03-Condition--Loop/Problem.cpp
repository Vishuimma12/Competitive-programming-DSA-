//
// Created by vssin on 08-07-2025.
//

#include <iostream>
using namespace std;
int main() {

    // Sum of the number...
    int number;
    cout << "Enter a number : ";
    cin >> number;
    int sum =0;
    for (int i = 1; i <= number; i++) {
        // sum = sum + i;
        sum +=i;
    }
    cout << "Sum of the number 'n' is: '" << sum << endl;

    // Fibonacci Series
    int firstNum = 0;
    int secondNum = 1;
    for (int i = 1; i <= number; i++) {
        cout << firstNum << ' ' << secondNum <<" ";
        firstNum = firstNum + secondNum;
        secondNum = secondNum + firstNum;

        // Another way
        // int nextNum = firstNum + secondNum;
        // firstNum = secondNum;
        // secondNum = nextNum;
        // cout << nextNum << " ";
    }
    cout << endl;

    // Prime or not prime (using break)
    bool isPrime = true;
    for (int i = 2; i < number; i++) {
        if (number % i == 0) {
            // cout << i << ' Not a prime Number ' << number / i << endl;
            isPrime = false;
            break;
        }
    }
    if (isPrime==false) {
        cout <<"Not a prime number: "<<number << endl;
    }else {
        cout << "Is a prime number: " << number << endl;
    }

    // Use of continue--> when ever we write code after continue then that part are not going to execute...
    for (int i = 2; i <= number; i++) {
        cout << i << endl;
        continue;
        cout << "This print statement are not reachable" << endl; //loop ignore becaue of the 'continue'
    }
}