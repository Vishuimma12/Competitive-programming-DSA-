//
// Created by vssin on 16-07-2025.
//
#include <iostream>
using namespace std;

void reverseArray(int arr[], int size) {
    int start = 0;
    int end = size - 1;

    while (start < end) {
        // Swap elements at start and end
        int temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;

        start++;
        end--;
    }
}

void printArray(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main() {
    int arr[10];
    cout << "Enter 10 elements: " << endl;
    for (int i = 0; i < 10; i++) {
        cin >> arr[i];
    }

    reverseArray(arr, 10);

    cout << "Reversed array: ";
    printArray(arr, 10);

    return 0;
}
