
//
// Created by vssin on 22-09-2025.
//

// Problem: Find the pivot index of an array...
#include <iostream>
using namespace std;

int getPivot(int arr[], int size) {
    int start = 0, end = size - 1;
    int mid = start + (end - start) / 2;
    while (start < end) {
        if (arr[mid] >= arr[0]) {
            start = mid + 1;
        }else {
            end = mid;
        }
        mid = start + (end - start) / 2;
    }
    return start;
}

int main(int argc, char *argv[]) {
    int arr[10] = {5, 6, 7, 8, 9, 10,1,2,3,4};
    cout << "Povit is : " << getPivot(arr, 10) << endl;
}
