//
// Created by vssin on 15-11-2025.
//
#include <iostream>
#include <vector>
using namespace std;

int lowerBound(const vector<int>& num, int key) {
    int ans = num.size();
    int start = 0, end = num.size() - 1;

    while (start <= end) {
        int mid = start + (end - start) / 2;

        if (num[mid] >= key) {
            ans = mid;
            end = mid - 1;
        } else {
            start = mid + 1;
        }
    }
    return ans;
}

int main() {
    vector<int> arr = {1,2,3,4,5,6,7,8,9,10};
    cout << lowerBound(arr, 5);
}

//   -> Builtin library...
// #include <iostream>
// #include <vector>
// #include <algorithm>
// using namespace std;
//
// int main() {
//     vector<int> v = {1, 3, 4, 7, 9};
//
//     int key = 5;
//
//     auto it = lower_bound(v.begin(), v.end(), key);
//     int index = it - v.begin();
//
//     cout << "Lower bound index: " << index << endl;
//
//     return 0;
// }
