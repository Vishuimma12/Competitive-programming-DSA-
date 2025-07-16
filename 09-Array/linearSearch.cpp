//
// Created by vssin on 16-07-2025.
//

#include <iostream>
using namespace std;

bool search(int arr[], int size, int key) {
    for (int i = 0; i < size; i++) {
        if (arr[i] == key) {
            return true;
        }
    }
    return false;
}

int main() {
    int arr[10]={1,2,3,4,5,6,7,8,9,10};
    cout<<"Enter the number to search: "<<endl;
    int key;
    cin>>key;
    search(arr,10,key);
    if (search(arr,10,key)==1) {
        cout<<"Element found: "<<key<<endl;
    }
    else {
        cout<<"Element not found"<<endl;
    }

    return 0;
}