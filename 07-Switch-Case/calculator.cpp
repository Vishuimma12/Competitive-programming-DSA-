//
// Created by vssin on 13-07-2025.
//
#include <iostream>
#include <cstdlib> // for exit()
using namespace std;

int main() {
    int a, b;
    char op;

    while (true) {
        cout << "\nEnter first number: ";
        cin >> a;
        cout << "Enter second number: ";
        cin >> b;
        cout << "Enter operator (+, -, *, /) or 'x' to exit: ";
        cin >> op;

        switch (op) {
            case '+':
                cout << a << " + " << b << " = " << a + b << endl;
                break;
            case '-':
                cout << a << " - " << b << " = " << a - b << endl;
                break;
            case '*':
                cout << a << " * " << b << " = " << a * b << endl;
                break;
            case '/':
                if (b == 0)
                    cout << "Error: Division by zero!\n";
                else
                    cout << a << " / " << b << " = " << a / b << endl;
                break;
            case 'x': // exit character
            case 'X':
                cout << "Exiting calculator...\n";
                exit(0);
            default:
                cout << op << " is not a valid operator." << endl;
        }
    }

    return 0;
}
