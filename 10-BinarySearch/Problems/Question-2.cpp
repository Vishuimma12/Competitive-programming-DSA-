//
// Created by vssin on 21-09-2025.
//

// Problem: Given an array of integers nums sorted in non-decreasing order,
// find the total number of occurrences of a given target value.
// If target is not found in the array, return 0.
// Must be solved in O(log n) runtime complexity.

#include <iostream>
using namespace std;

int firstOcc(int arr[], int key, int size) {
    int start = 0, end = size - 1;
    int mid = start + (end - start) / 2;
    int ans = -1;
    while (start <= end) {
        if (arr[mid]==key) {
            ans = mid;
            end = mid - 1;
        }
        else if (arr[mid] < key) {
            start = mid + 1;
        }
        else {
            end = mid - 1;
        }
        mid = start + (end - start) / 2;
    }
    return ans;
}

int lastOcc(int arr[], int key, int size) {
    int start = 0, end = size - 1;
    int mid = start + (end - start) / 2;
    int ans = -1;
    while (start <= end) {
        if (arr[mid]==key) {
            ans = mid;
            start = mid + 1;
        }
        else if (arr[mid] < key) {
            start = mid + 1;
        }
        else {
            end = mid - 1;
        }
        mid = start + (end - start) / 2;
    }
    return ans;
}

int main() {
    int arr[10] = {1,1,1,1,1,1,1,3,4,5};

    int firstIndex = firstOcc(arr, 1, 10);
    cout << "First occurrence: " << firstIndex << endl;

    int lastIndex = lastOcc(arr, 1, 10);   // ✅ fixed here
    cout << "Last occurrence: " << lastIndex << endl;

    int total = (firstIndex == -1 || lastIndex == -1) ? 0 : (lastIndex - firstIndex + 1);
    cout << "Total occurrences: " << total << endl;

    return 0;
}


