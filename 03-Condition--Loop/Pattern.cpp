//
// Created by vssin on 05-07-2025.
//
#include <iostream>
using namespace std;

int main() {
    int n;
    cout<<"Enter the number for Square pattern: ";
    cin>>n;
    int i=0;
    while(i<n) {
        int j=0;
        while(j<n) {
            cout<<"*  ";
            j=j+1;
        }
        cout<<endl;
        i=i+1;
    }

    // Here are the pattern which print the row1->1, row2->2 and soon
    // while(i<n) {
    //     int j=0;
    //     while(j<n) {
    //         cout<<i+1<<"  ";
    //         j=j++;
    //     }
    //     cout<<endl;
    //     i=i++;
    // }


}