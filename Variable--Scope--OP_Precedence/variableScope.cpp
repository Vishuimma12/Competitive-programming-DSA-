//
// Created by vssin on 08-07-2025.
//

#include <iostream>
using namespace std;

int global = 20; // Global scope variable: accessible throughout the file after declaration

void scopeTestFunction() {
    int localInFunction = 100; // 🔹 Local to this function only
    cout << "Inside function, localInFunction = " << localInFunction << endl;
}

int main() {
    int a = 3; // Local to main()
    cout << "Main scope - a = " << a << endl;

    cout << "Global variable = " << global << endl; // Accessible here

    // Block scope (limited to if block)
    if (true) {
        int b = 5; // This b is only accessible inside this 'if' block
        cout << "Inside first if block - b = " << b << endl;
    }

    // New variable with same name as above, but this is local to main()
    int b = 1;
    cout << "Main scope - b = " << b << endl;

    // 🔹 Another local variable
    int i = 8;
    cout << "Main scope - i = " << i << endl;

    // i declared in for loop is scoped only to the loop
    for (int i = 0; i < 8; i++) {
        cout << "Inside for loop - i = " << i << endl;
    }

    // Shadowing variables (redeclaring variables with same name in inner blocks)
    if (true) {
        int a = 9; // Shadows main's `a` within this block
        cout << "Inside outer if block - a = " << a << endl;

        if (true) {
            int a = 11; // Shadows outer if block's `a`
            cout << "Inside inner if block - a = " << a << endl;

            if (true) {
                int a = 13; //  Shadows previous `a`
                cout << "Inside deepest if block - a = " << a << endl;
            }
        }
    }

    // Function-local scope
    scopeTestFunction();

    return 0;
}
