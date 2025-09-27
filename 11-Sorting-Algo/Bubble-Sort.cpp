//
// Created by vssin on 27-09-2025.
//

#include <iostream>
using namespace std;

void printArray(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

void bubbleSort(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < ((n - 1) - i); j++) {
            if (arr[j] > arr[j + 1]) {
                swap(arr[j], arr[j + 1]);
            }
            cout << " Round  " << j+1 << ": ";
            printArray(arr, n);
        }
        cout << endl;

    }
}

int main(int argc, char *argv[]) {
    int arr[] = {10, 1, 7, 6, 14, 9};
    bubbleSort(arr, 6);

}
