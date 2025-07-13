//
// Created by vssin on 13-07-2025.
//

#include <iostream>
#include <cstdlib> // Required for exit()
using namespace std;

int main() {
    int choice;

    while (true) { // Infinite loop
        cout << "\nMenu:\n";
        cout << "1. Say Hello\n";
        cout << "2. Motivate Me\n";
        cout << "3. Continue\n";
        cout << "0. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                cout << "Hello! You're doing great.\n";
                break;
            case 2:
                cout << "Keep pushing forward. Success is near!\n";
                break;
            case 3:
                cout << "Looping again...\n";
                break;
            case 0:
                cout << "Exiting the program. Goodbye!\n";
                exit(0); // Terminates the program
            default:
                cout << "Invalid choice. Try again.\n";
        }
    }

    return 0;
}
