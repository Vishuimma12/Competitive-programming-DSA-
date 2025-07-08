//
// Created by vssin on 08-07-2025.
//

#include <iostream>
using namespace std;

int main() {
    int a = 3;
    int b = 4;

    // Bitwise operation
    cout << "And operator: " << (a & b) << endl;
    cout << "Or operator: " << (a | b) << endl;
    cout << "Xor operator: " << (a ^ b) << endl;
    cout << "Not operator: " << ~a << endl;

    // leftshift and rightshift operators
    a=a<<2;
    b=b<<2;
    cout << "Leftshift the bit: " << a << endl;
    cout << "Leftshift the bit: " << b << endl;

    a=a>>2;
    b=b>>2;
    cout << "Rightshift the bit: " << a << endl;
    cout << "Rightshift the bit: " << b << endl;

    // Post-increment
    int i=7;
    cout <<"Original Value: " << i << endl;
    i++;
    cout <<"Post Increment: " << i << endl;

    // Pre-increment
    cout <<"Original Value: " << i << endl;
    ++i;
    cout <<"Pre Increment: " << i << endl;

    // Post-decrement
    cout <<"Original Value: " << i << endl;
    i--;
    cout <<"Post Decrement: " << i << endl;

    // Pre-decrement
    cout <<"Original Value: " << i << endl;
    --i;
    cout <<"Pre Decrement: " << i << endl;

}
