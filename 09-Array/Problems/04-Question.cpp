//
// Created by vssin on 28-09-2025.
//

//Problem: Remove Duplicates in a place from a sorted array


#include <iostream>
#include <set>
using namespace std;

int removeDuplicates(int arr[], int n) {
    set <int> st;
    for (int i = 0; i < n; i++) {
        set.insert(arr[i]);
    }

    int index = 0;
    for (auto it = st.begin(); it != st.end(); it++) {
        arr[index] = *it;
        index++;
    }
    return (index+1);

}

int main(int argc, char *argv[]) {
    int arr[10] = {1, 2, 3, 4, 5, 6, 6, 9, 9, 10};
    cout << removeDuplicates(arr, 10) << endl;

}
