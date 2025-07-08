//
// Created by vssin on 08-07-2025.
//

#include <iostream>
using namespace std;

int main() {
    int a = 5, b = 3, c = 2;

    // Without brackets: * has higher precedence than +
    int result1 = a + b * c;       // result1 = 5 + (3 * 2) = 11
    cout << "Without brackets: " << result1 << endl;

    // With brackets: + evaluated first
    int result2 = (a + b) * c;     // result2 = (5 + 3) * 2 = 16
    cout << "With brackets: " << result2 << endl;

    // Bitwise example
    // cout << "Bitwise AND without brackets: " << a & b << endl;  // Error-prone
    cout << "Bitwise AND with brackets: " << (a & b) << endl;   // Safer

    return 0;
}

// Highest
//    ::
//    ++ -- (postfix), (), [], .
//    ++ -- + - ! ~ * & (prefix)
//    * / %
//    + -
//    << >>
//    < <= > >=
//    == !=
//    &
//    ^
//    |
//    &&
//    ||
//    ?:
//    =, +=, etc.
//    ,
// Lowest
