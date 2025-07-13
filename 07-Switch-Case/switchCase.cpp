//
// Created by vssin on 13-07-2025.
//

#include <iostream>
using namespace std;
int main() {
    char ch ;
    cin >> ch;
    cout << endl;
    int num;
    num=ch;

    switch (ch) {
        case 'a':
            cout << "Char "<<ch<<endl;
            switch (num) {
                case 97:
                    cout << "Num will change in char: " << char(num);
                    break;
            }
            break;
        case 'b':
            cout << "Char "<<ch;
            break;
        case 'c':
            cout << "Char "<<ch;
            break;
        case 'd':
            cout << "Char "<<ch;
            break;
        case 'e':
            cout << "Char "<<ch;
            break;
        case 'f':
            cout << "Char "<<ch;
            break;
        case 'g':
            cout << "Char "<<ch;
            break;
        case 'h':
            cout << "Char "<<ch;
            break;
        case 'i':
            cout << "Char "<<ch;
            break;
        case 'j':
            cout << "Char "<<ch;
            break;
        case 'k':
            cout << "Char "<<ch;
            break;
        case 'l':
            cout << "Char "<<ch;
            break;
        case 'm':
            cout << "Char "<<ch;
            break;
        default:
            cout << "its an Defalut Character "<<ch;
    }
}

// continue ---> Not valid for switch case...
