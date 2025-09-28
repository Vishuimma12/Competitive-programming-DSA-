//
// Created by vssin on 26-09-2025.
//

// Question: Find the largest element in an array.

#include <iostream>
using namespace std;
// Brute force solution:-
// void bubbleSort(int arr[], int n) {
//     for (int i = 0; i < n; i++) {
//         for (int j = 0; j < n - i - 1; j++) {
//             if (arr[j] > arr[j + 1]) {
//                 swap(arr[j], arr[j + 1]);
//             }
//         }
//     }
// }
//
// int largestElement(int arr[], int n) {
//     bubbleSort(arr, n);
//     return arr[n - 1];
// }

//Optimal Solution:-

void largestElement(int arr[], int n) {
    int largest = arr[0];
    for (int i = 1; i < n; i++) {
        if (arr[i] > largest) {
            largest = arr[i];
        }
    }
    cout << largest << endl;
}

int main(int argc, char *argv[]) {
    int arr[6] =  { 10,1,7,6,14,9};
    largestElement(arr, 6);

}