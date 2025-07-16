//
// Created by vssin on 16-07-2025.
//

#include <iostream>
using namespace std;

void printArray(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
void update(int arr[], int n) {
    arr[0]=120;
    cout<< "Inside update: "<<endl;
    printArray(arr, n);

    cout << "Going Outside update... "<<endl;
}

int main() {
    int arr[10]={1,2,3,4,5,6,7,8,9};
    update(arr,10);

    cout << endl;
    cout<<"Printing the main function: "<<endl;  // it also assign with 120 at index 0... because it share the address...
                                                 // it is not making an copy like an variable...
    printArray(arr,10);
}