//
// Created by vssin on 06-10-2025.
//

// problem : Move all zero to the end.

#include <iostream>
using namespace std;
#include <vector>

void print(vector<int> nums) {
    for (int i = 0; i < nums.size(); i++) {
        cout << nums[i] << " ";
    }
}

// Brute force Approach:
// void zeroToEnd(vector<int> nums) {
//     int n = nums.size();
//     vector<int> temp;
//     for (int i = 0; i < n; i++) {
//         if (nums[i] != 0) {
//             temp.push_back(nums[i]);
//         }
//     }
//     nums.clear();
//     for (int i = 0; i < temp.size(); i++) {
//         nums.push_back(temp[i]);
//     }
//     for (int i = temp.size(); i < n; i++) {
//         nums.push_back(0);
//     }
//     temp.clear();
//     print(nums);
// }


// Optimal approach:

void zeroToEnd(vector<int> nums) {
    int j = -1;
    for (int i = 0; i < nums.size(); i++) {
        if (nums[i] == 0) {
            j = i;
            break;
        }
    }

    for (int i = j+1; i < nums.size(); i++) {
        if (nums[i] != 0) {
            swap(nums[i], nums[j]);
            j++;
        }
    }
    print(nums);
}

int main(int argc, char *argv[]) {
    vector<int> nums = {1, 2, 3, 4, 0, 6, 0, 8, 9, 0};
    cout << "Original Array: ";
    print(nums);
    cout << endl;
    cout << "Move all zero to the end of the Array: ";
    zeroToEnd(nums);
    cout << endl;

    return 0;

}
