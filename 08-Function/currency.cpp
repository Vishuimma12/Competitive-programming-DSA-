//
// Created by vssin on 18-07-2025.
//

#include <iostream>
using namespace std;

int currency100(int rupees) {
    int note = rupees / 100;
    rupees = rupees % 100;
    cout << "100 Ruprees are " << note<<endl;
    return rupees;
}
int currency20(int rupees) {
    int notes = rupees/20;
    rupees = rupees % 20;
    cout << "20 Ruprees are " << notes<<endl;
    return rupees;
}
int currency10(int rupees) {
    int note = rupees / 10;
    rupees = rupees % 10;
    cout << "10 Ruprees are " << note<<endl;
    return rupees;
}
int currency5(int rupees) {
    int note = rupees / 5;
    rupees = rupees % 5;
    cout << "5 Ruprees are " << note<<endl;
    return rupees;
}

int main() {
    int rupees;
    cout << "Enter number of rupees: ";
    cin >> rupees;
    rupees = currency100(rupees);
    rupees = currency20(rupees);
    rupees = currency10(rupees);
    rupees = currency5(rupees);
    cout << "The total number of notes are required: "<< rupees << endl;

    return 0;


}