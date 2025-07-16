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

void printArray1(char arr[], int size) {
    for (int i = 0; i < size; i++) {
        cout<<"Index at "<<i<<": "<<arr[i]<<endl;
    }
    cout << "Printing done..."<< endl;
}

int main() {
    int number[10];
    cout<<"Value of array elements: "<<number[0]<<endl;
    // cout<<"Value of array 20th elements: "<<number[20]<<endl;   // it will show error because size are not defined

    int second[3]={1,2,3};
    printArray(second, 3);
    // cout<<"Value of array elements at index 0: "<<second[0]<<endl;
    // cout<<"Value of array elements at index 1: "<<second[1]<<endl;
    // cout<<"Value of array elements at index 2: "<<second[2]<<endl;

    int arr[10]={1,2,3,4,5,6,7,8,9,10};
    cout<<"Print the array: "<<endl;
    printArray(arr, 10);
    // for (int i = 0; i < 10; i++) {
    //     cout<<"Index at "<<i<<": "<<arr[i]<<endl;
    // }

    int arr2[10]={0};
    cout<<"Print the array: "<<endl; // every element assign with zero.
    printArray(arr2, 10);

    // Size of array length
    int arrSize = sizeof(arr)/sizeof(int);
    cout<<"Size of array: "<<arrSize<<endl;

    //One drawback in this case of finding size of array...
    int arr3[10]={1,2,4};
    int arr3Size = sizeof(arr3)/sizeof(int);
    cout<<"Size of array: "<<arr3Size<<endl; //in this case it calculate the size we assign doest matter how may values are thier..
    printArray(arr3, arr3Size);

    char ch[5] = {'a','b','c','d','e'};
    printArray1(ch,5);

    double arr4[10]={1,2,3,4,5,6,7,8,9};
    float arr5[10]={1,2,3,4,5,6,7,8,9};
    string arr6[10]={"abc","b","c","d","e","f"};


    return 0;

}