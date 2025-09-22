//
// Created by vssin on 22-09-2025.
//

// Problem: You are given an integer array nums sorted in ascending order
// (with distinct values).
// Prior to being passed to your function, nums is possibly left rotated
// at an unknown index k (1 <= k < nums.length).
// For example, [0,1,2,4,5,6,7] might be left rotated at index 3
// and become [4,5,6,7,0,1,2].
//
// Given the array nums after the possible rotation and an integer target,
// return the index of target if it is in nums, otherwise return -1.
//
// You must write an algorithm with O(log n) runtime complexity.
//
// Example 1:
// Input: nums = [4,5,6,7,0,1,2], target = 0
// Output: 4

#include <iostream>
using namespace std;

int getPivot(int arr[], int size) {
    int start = 0, end = size - 1;
    while (start < end) {
        int mid = start + (end - start) / 2;
        if (arr[mid] >= arr[0]) {
            start = mid + 1;
        } else {
            end = mid;
        }
    }
    return start;
}

int binarySearch(int arr[], int start, int end, int key) {
    while (start <= end) {
        int mid = start + (end - start) / 2;
        if (arr[mid] == key) {
            return mid;
        }
        if (key > arr[mid]) {
            start = mid + 1;
        } else {
            end = mid - 1;
        }
    }
    return -1;
}

int searchInRotatedArray(int arr[], int size, int key) {
    int pivot = getPivot(arr, size);

    if (arr[pivot] <= key && key <= arr[size - 1]) {
        // Search in right half
        return binarySearch(arr, pivot, size - 1, key);
    } else {
        // Search in left half
        return binarySearch(arr, 0, pivot - 1, key);
    }
}

int main() {
    int arr[] = {4,5,6,7,0,1,2};
    int size = sizeof(arr) / sizeof(arr[0]);
    int key = 0;

    int index = searchInRotatedArray(arr, size, key);

    if (index != -1) {
        cout << "Element " << key << " found at index " << index << endl;
    } else {
        cout << "Element " << key << " not found" << endl;
    }

    return 0;
}

