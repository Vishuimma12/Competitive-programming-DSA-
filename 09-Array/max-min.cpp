//
// Created by vssin on 16-07-2025.
//
#include <iostream>
using namespace std;

void printArray(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        cout<<"Index at "<<i<<": "<<arr[i]<<endl;
    }
    cout << "Printing done..."<< endl;
}
int getMax(int arr[], int size) {
    int max = INT_MIN;
    for (int i = 0; i < size; i++) {
        if (arr[i] > max) {
            max = arr[i];
        }
    }
    return max;
}
int getMin(int arr[], int size) {
    int min = INT_MAX;
    for (int i = 0; i < size; i++) {
        if (arr[i] < min) {
            min = arr[i];
        }
    }
    return min;
}

int main() {
    int size;
    cout<<"Enter the size of the array: ";
    cin>>size;
    // int arr[size]; // Its an bad pratices...
    int arr[1000];
    for (int i = 0; i < size; i++) {
        cin>>arr[i];
    }
    printArray(arr, size);
    int max = getMax(arr, size);
    cout<<"The maximum is: "<<max<<endl;

    int min = getMin(arr, size);
    cout<<"The minmum is: "<<min<<endl;

    return 0;
}

//  max( maximum , array[i] ); ---> it is pre define function for cacilating max of number
//  min( minimum , array[i] ); ---> it is pre define function for cacilating min of number
