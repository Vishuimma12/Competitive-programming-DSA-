//
// Created by vssin on 21-09-2025.
//

// You are given an integer mountain array arr of length n where the values
// increase to a peak element and then decrease.
// Return the index of the peak element.
// Must be solved in O(log(n)) time complexity.

#include <iostream>
using namespace std;

int peakIndexInMountain(int arr[], int size) {
    int start = 0, end = size - 1;
    int mid = start + (end - start) / 2;

    while (start < end) {  // ✅ strictly less
        if (arr[mid] < arr[mid + 1]) {
            // we are in the increasing part
            start = mid + 1;
        } else {
            // we are in the decreasing part (peak could be mid)
            end = mid;
        }
        mid = start + (end - start) / 2;
    }
    return start;  // or end, both point to the peak
}

int main() {
    int arr[] = {1, 3, 5, 9, 11, 4, 2};
    int size = sizeof(arr) / sizeof(arr[0]);

    int peakIndex = peakIndexInMountain(arr, size);
    cout << "Peak index: " << peakIndex << endl;
    cout << "Peak element: " << arr[peakIndex] << endl;

    return 0;
}
