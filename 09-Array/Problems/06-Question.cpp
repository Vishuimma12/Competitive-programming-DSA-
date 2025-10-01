//
// Created by vssin on 01-10-2025.
//
#include <iostream>
#include <vector>
using namespace std;

void printArray(vector<int> arr) {
    for (int i = 0; i < arr.size(); i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

void rotate_by_D_place(vector<int> &nums, int d) {
    int n = nums.size();
    d = d % n; // handle case where d > n

    // Step 1: store first d elements
    vector<int> temp;
    for (int i = 0; i < d; i++) {
        temp.push_back(nums[i]);
    }

    // Step 2: shift remaining n-d elements to the front
    for (int i = d; i < n; i++) {
        nums[i - d] = nums[i];
    }

    // Step 3: put back stored elements at the end
    for (int i = 0; i < d; i++) {
        nums[n - d + i] = temp[i];
    }
}

int main() {
    vector<int> nums = {1,2,3,4,5,6,7,8,9,10};
    printArray(nums);
    rotate_by_D_place(nums, 3);  // left rotate by 3
    printArray(nums); // Output: 4 5 6 7 8 9 10 1 2 3
    return 0;
}
