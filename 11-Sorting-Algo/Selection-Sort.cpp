//
// Created by vssin on 23-09-2025.
//

//Selection Sort

#include <iostream>
using namespace std;

void printArray(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
}

void selectionSort(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        int min = i;
        for (int j = i + 1; j < size; j++) {
            if (arr[j] < arr[min]) {
                min = j;
            }
        }
        swap(arr[i], arr[min]);
    }
    printArray(arr, size);
}

int main(int argc, char *argv[]) {
    int arr[] = {2,3,15,8,0,5,28,12,13,11};
    int size = sizeof(arr) / sizeof(arr[0]);

    cout << "Unsorted Array: " << endl;
    printArray(arr, size);
    cout << endl<< endl;
    cout << "Sorted Array: " << endl;
    selectionSort(arr, size);

}
