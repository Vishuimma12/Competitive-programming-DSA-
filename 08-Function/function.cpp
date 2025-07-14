//
// Created by vssin on 14-07-2025.
//

#include <iostream>
using namespace std;

// Function to calculate a^b using a for loop
int power(int a, int b) {
    int ans = 1;

    // Loop multiplies 'a' by itself 'b' times
    for (int i = 1; i <= b; i++) {
        ans *= a;
    }

    return ans;
}

// Function to take input and calculate power internally
int Pow() {
    int a, b;

    // Input two numbers from the user
    cout << "Enter two numbers: ";
    cin >> a >> b;

    int ans = 1;

    // Multiply 'a' by itself 'b' times
    for (int i = 1; i <= b; i++) {
        ans *= a;
    }

    return ans;
}

int main() {
    int a, b;

    // Taking input from user
    cout << "Enter two numbers: ";
    cin >> a >> b;

    // Calling first function by passing parameters
    int ans = power(a, b);
    cout << "Answer = " << ans << endl;

    // Calling second function which takes input inside itself
    int ans2 = Pow();
    cout << "Ans = " << ans2 << endl;

    return 0;
}
