//
// Created by vssin on 01-10-2025.
//

#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

void printArray(vector<int> arr) {
    for (int i = 0; i < arr.size(); i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

// TC -> O ( d ) + O ( n-d ) + o ( d ) = O (n+d)
// SC -> o ( d )
// void rotate_by_D_place(vector<int> &nums, int d) {
//     int n = nums.size();
//     d = d % n; // handle case where d > n
//
//     // Step 1: store first d elements
//     vector<int> temp;
//     for (int i = 0; i < d; i++) {
//         temp.push_back(nums[i]);
//     }
//
//     // Step 2: shift remaining n-d elements to the front
//     for (int i = d; i < n; i++) {
//         nums[i - d] = nums[i];
//     }
//
//     // Step 3: put back stored elements at the end
//     for (int i = 0; i < d; i++) {
//         nums[n - d + i] = temp[i];
//     }
// }

void reverse(vector<int> arr) {

}
void rotate_by_D_place(vector<int> &nums, int d) {
    int n = nums.size();
    d = d % n; // in case d > n

    // Reverse first d elements
    reverse(nums.begin(), nums.begin() + d);

    // Reverse the remaining n-d elements
    reverse(nums.begin() + d, nums.end());

    // Reverse the whole array
    reverse(nums.begin(), nums.end());
}

int main() {
    vector<int> nums = {1,2,3,4,5,6,7,8,9,10};
    printArray(nums);
    cout << endl;
    cout << "Enter a number you want to rotate by ";
    int n;
    cin >> n;
    rotate_by_D_place(nums, n);  // left rotate by 3
    printArray(nums); // Output: 4 5 6 7 8 9 10 1 2 3
    return 0;
}

// try: right rotate an array by D place...
