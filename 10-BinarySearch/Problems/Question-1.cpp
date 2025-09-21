//
// Created by vssin on 21-09-2025.
//

// Problem: Given an array of integers nums sorted in non-decreasing order,
// find the starting and ending position of a given target value.
// If target is not found in the array, return [-1, -1].
// Must be solved in O(log n) runtime complexity.

#include <iostream>
using namespace std;

// Function to find the FIRST occurrence of the key
int firstOcc(int arr[], int key, int size) {
    int start = 0, end = size - 1;
    int ans = -1;  // default = not found
    while (start <= end) {
        // ⚠️ Use this formula to avoid overflow (instead of (start+end)/2)
        int mid = start + (end - start) / 2;

        if (arr[mid] == key) {
            ans = mid;      // possible answer found
            end = mid - 1;  // ⚠️ move LEFT to check if earlier occurrence exists
        }
        else if (arr[mid] < key) {
            start = mid + 1; // move right
        }
        else {
            end = mid - 1;   // move left
        }
    }
    return ans; // returns index or -1 if not found
}

// Function to find the LAST occurrence of the key
int lastOcc(int arr[], int key, int size) {
    int start = 0, end = size - 1;
    int ans = -1;  // default = not found
    while (start <= end) {
        int mid = start + (end - start) / 2;

        if (arr[mid] == key) {
            ans = mid;       // possible answer found
            start = mid + 1; // ⚠️ move RIGHT to check if later occurrence exists
        }
        else if (arr[mid] < key) {
            start = mid + 1; // move right
        }
        else {
            end = mid - 1;   // move left
        }
    }
    return ans; // returns index or -1 if not found
}

int main() {
    int evenArr[10] = {1,2,3,3,4,4,4,5,6,8};
    int oddArr[9]  = {1,2,3,4,4,4,7,8,9};

    // Expected: first=4, last=6
    cout << "First Occurrence of 4 in evenArr: " << firstOcc(evenArr, 4, 10) << endl;
    cout << "Last Occurrence of 4 in evenArr: "  << lastOcc(evenArr, 4, 10) << endl;

    // Expected: first=3, last=5
    cout << "First Occurrence of 4 in oddArr: " << firstOcc(oddArr, 4, 9) << endl;
    cout << "Last Occurrence of 4 in oddArr: "  << lastOcc(oddArr, 4, 9) << endl;

    return 0;
}
