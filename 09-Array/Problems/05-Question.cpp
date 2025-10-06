//
// Created by vssin on 29-09-2025.
//

#include <iostream>
#include <vector>
using namespace std;

void rotateArray(vector<int>& nums, int k) {
    int n = nums.size();
    k %= n;

    while(k--){
        int temp = nums[n-1];

        for (int j = n - 1; j > 0; j--) {
            nums[j] = nums[j - 1]; // shift right
        }
        nums[0] = temp;
    }


    cout << "[";
    for(int i = 0; i < n; i++){
        cout << nums[i] << ",";
    }
    cout<< "]";

}

int main(int argc, char *argv[]) {
    vector<int> nums = {1,2,3,4,5,6,7};
    int k;
    cout << "Enter the number to be rotated: ";
    cin >> k;
    rotateArray(nums, k);
}
