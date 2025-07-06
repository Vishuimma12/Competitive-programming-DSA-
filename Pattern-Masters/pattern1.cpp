//
// Created by vssin on 06-07-2025.
//

#include <iostream>  // Include input/output stream library
using namespace std;

int main() {
    // Introduction
    cout << "Triangle pattern Questions with different output." << endl;

    int n;  // Variable to store the number of rows
    cout << "Enter the number: ";
    cin >> n;

    // First Pattern: Star triangle
    cout << "Star pattern '*' : " << endl;
    int i = 0;
    while (i < n) {
        int j = 0;
        // Print '*' i+1 times for each row
        while (j <= i) {
            cout << "* ";
            j = j + 1;
        }
        cout << endl;
        i = i + 1;
    }

    // Second Pattern: Counting through the row
    cout << "Counting through the row: " << endl;
    i = 0;
    while (i < n) {
        int j = 0;
        // Print numbers from 1 to i+1 for each row
        while (j <= i) {
            cout << (j + 1) << " ";
            j = j + 1;
        }
        cout << endl;
        i = i + 1;
    }

    // Third Pattern: Repetition of the row number
    cout << "Repetition of number through the row & counting through the column: " << endl;
    i = 0;
    while (i < n) {
        int j = 0;
        // Print the row number (i+1) j+1 times
        while (j <= i) {
            cout << (i + 1) << " ";
            j = j + 1;
        }
        cout << endl;
        i = i + 1;
    }

    return 0;  // Indicate successful execution
}
