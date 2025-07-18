//
// Created by vssin on 18-07-2025.
//

// 💰 Currency Denomination Breakdown Program
// Question:
// Write a program that accepts an amount (in Indian Rupees) as input from the user and displays the minimum number of
// currency notes required to make up that amount using denominations of ₹100, ₹20, ₹10, and ₹5. The output should
// specify how many notes of each denomination are used.

#include <iostream>
using namespace std;

int currency100(int &rupees) {     // & is use for pass by reference
    int notes = rupees / 100;
    rupees = rupees % 100;
    cout << "100 Rupees notes: " << notes << endl;
    return notes;
}

int currency20(int &rupees) {
    int notes = rupees / 20;
    rupees = rupees % 20;
    cout << "20 Rupees notes: " << notes << endl;
    return notes;
}

int currency10(int &rupees) {
    int notes = rupees / 10;
    rupees = rupees % 10;
    cout << "10 Rupees notes: " << notes << endl;
    return notes;
}

int currency5(int &rupees) {
    int notes = rupees / 5;
    rupees = rupees % 5;
    cout << "5 Rupees notes: " << notes << endl;
    return notes;
}

int main() {
    int rupees;
    cout << "Enter number of rupees: ";
    cin >> rupees;

    int remaining = rupees;
    int notes = 0;

    // Each function updates 'remaining' using reference and adds to total notes
    notes += currency100(remaining);
    notes += currency20(remaining);
    notes += currency10(remaining);
    notes += currency5(remaining);

    cout << "The total number of notes required: " << notes << endl;

    return 0;
}

