//
// Created by vssin on 07-09-2025.
//

// Condition:- Binary Search must be in monotonic function,
// i.e., the array must be sorted either in Increasing or Decreasing order.

#include <iostream>
using namespace std;

// Function to perform Binary Search
// Parameters:
//   arr[]  -> sorted array (monotonic: increasing or decreasing order)
//   size   -> number of elements in array
//   key    -> element to be searched
// Returns:
//   index of 'key' if found, otherwise -1

int binarySearch(int arr[], int size, int key) {
    int start = 0;             // Starting index of array
    int end = size - 1;        // Ending index of array
    int mid = (start + end) / 2; // Calculate middle index (initially)

    // Run loop until start and end cross each other
    while (start <= end) {
        // If element at mid matches the key, return mid
        if (arr[mid] == key) {
            return mid;
        }
        // If key is greater than mid element, search in right half
        if (key > arr[mid]) {
            start = mid + 1;
        }
        // Else search in left half
        else {
            end = mid - 1;
        }
        // Update mid after changing start/end
        mid = (start + end) / 2;
    }
    // If element is not found, return -1
    return -1;
}

int main() {
    // Example array with even number of elements (sorted increasing order)
    int even[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

    // Example array with odd number of elements (sorted increasing order)
    int odd[] = {2, 3, 4, 5, 6, 7, 8, 9, 10};

    // Search for 10 in 'even' array
    int evenIndex = binarySearch(even, 10, 10);
    cout << "Index of 10 in even array is " << evenIndex << endl;

    // Search for 10 in 'odd' array
    int oddIndex = binarySearch(odd, 9, 10);
    cout << "Index of 10 in odd array is " << oddIndex << endl;

    return 0;
}


// Instead of (start + end) / 2, compute mid like this: int mid = start + (end - start) / 2;

// Why is this safe?
// end - start is always ≤ size of array (a safe number).
// So (end - start)/2 will never overflow.
// Adding it back to start keeps it inside valid integer range

// 🔍 Linear Search (O(n))

// Checks each element one by one from start to end.
// Worst case: if the element is not present (or at the last index), it will check all n elements.
// 👉 Time complexity: O(n)

// ⚡ Binary Search (O(log n))

// Checks the middle element first.
// Each comparison eliminates half of the remaining elements.
// Worst case: at most log₂(n) comparisons.
// 👉 Time complexity: O(log n)

// 📊 Example: Searching in 1,000,000 (10⁶) elements
// Method	Steps Required (Worst Case)
// Linear Search	1,000,000 steps
// Binary Search	log₂(1,000,000) ≈ 20 steps