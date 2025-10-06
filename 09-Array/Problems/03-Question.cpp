//
// Created by vssin on 28-09-2025.
//
//Problem: Check if the array is sorted for not
#include <iostream>
using namespace std;

bool checkArraySorted(int arr[], int n) {

    for (int i = 0; i < n-1; i++) {
        if (arr[i] <= arr[i+1]) {

        }
        else {
            return false;
        }
    }
    return true;
}

int main(int argc, char *argv[]) {
    int arr[10] = {1, 2, 3, 4, 5, 6, 7,8, 9, 10};
    cout << checkArraySorted(arr,10) << endl;
}

