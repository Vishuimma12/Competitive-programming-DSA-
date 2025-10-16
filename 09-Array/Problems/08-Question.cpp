//
// Created by vssin on 15-10-2025.
//

// Given an array nums containing n distinct numbers in the range [0, n], return the only number in the range that is missing from the array.

#include <iostream>
#include <vector>
using namespace std;

// int missingNumber(vector<int>& nums) {
//     int n = nums.size();
//
//     int xorAll = 0;   // Will store XOR of all numbers from 0 to n
//     int xorNums = 0;  // Will store XOR of all numbers present in the array
//
//     // Step 1: XOR all numbers from 0 to n
//     for (int i = 0; i <= n; i++) {
//         xorAll ^= i;
//     }
//
//     // Step 2: XOR all numbers from the given array
//     for (int num : nums) {
//         xorNums ^= num;
//     }
//
//     // Step 3: XOR of these two results gives the missing number
//     return xorAll ^ xorNums;
// }



int missingNumber(vector<int>& nums) {
    int n = nums.size();
    int ans;

    int sum = (n*(n+1)/2);
    int sum2 = 0;
    for(int i = 0; i < n; i++){
        sum2 += nums[i];
    }

    ans = sum - sum2;
    return ans;

}

int main(int argc, char *argv[]) {
    vector<int> nums = {1, 2, 3, 0, 5};
    cout << "Missing numbers: " << missingNumber(nums) << endl;
}
