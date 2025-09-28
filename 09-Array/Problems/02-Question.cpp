//
// Created by vssin on 28-09-2025.
//

// Problem Find second largest element in an array.
#include <iostream>
using namespace std;

// Brute force Algo.. TC-> O ( n^2 )
// void bubbleSort(int arr[], int n) {
//     for (int i = 0; i < n; i++) {
//         for (int j = 0; j < n - i - 1; j++) {
//             if (arr[j] > arr[j + 1]) {
//                 swap(arr[j], arr[j + 1]);
//             }
//         }
//     }
// }

// int secondLargest(int arr[], int size) {
//     bubbleSort(arr, size);
//     int largest = arr[size - 1];
//     int secondLargest = -1;
//     for (int i = size - 1; i > 0; i--) {
//         if (arr[i] != largest) {
//             secondLargest = arr[i];
//             break;
//         }
//     }
//     return secondLargest;
// }

//Better Algo... TC-> O ( 2n )
// int largestElement( int arr[], int n ) {
//     int largest = arr[0];
//     for (int i = 0; i < n; i++) {
//         if (arr[i] > largest) {
//             largest = arr[i];
//         }
//     }
//     return largest;
// }
// int secondLargest(int arr[], int n) {
//     int largest = largestElement(arr, n);
//     int secondLargest = arr[0];
//     for (int i = 0; i < n; i++) {
//         if (arr[i] > secondLargest && arr[i] != largest) {
//             secondLargest = arr[i];
//         }
//     }
//     return secondLargest;
// }

// Optimal Algo.. TC-> O ( n )

int secondLargest(int arr[], int n) {
    int largest = arr[0];
    int sLargest = -1; //if all the element are positive then I can also assign -1 ot sLargest.
    for (int i = 1; i < n; i++) {
        if (arr[i] > largest) {
            sLargest = largest;
            largest = arr[i];
        }
        else if (arr[i] < largest && arr[i] > sLargest) {
            sLargest = arr[i];
        }
    }
    return sLargest;

}

int main(int argc, char *argv[]) {
    int arr[6] = {1, 2, 4, 7, 7, 6};
    cout << "Second largest Element : " << secondLargest(arr, 6) << endl;
}
