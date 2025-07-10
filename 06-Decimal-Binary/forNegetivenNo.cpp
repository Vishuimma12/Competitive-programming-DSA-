//
// Created by vssin on 10-07-2025.
//
#include <iostream>
#include <math.h>

using namespace std;

int main() {
    unsigned int n;
    cout << "Enter a number: ";
    cin >> n;
    int ans = 0;
    int i=0;
    while (n != 0) {
        int bit = n & 1;
        ans = (bit * pow(10,i)) +ans;
        n = n >> 1;
        i++;
    }
    cout << "Binary number is: " << ans << endl;
    i =0;
    int result = 0;
    while ( ans != 0) {
        ans= ans & 1;
        result = ans + pow(2,i);
        ans = ans >> 1;
        i++;
    }
    cout << "Binary number is: " << result << endl;

}