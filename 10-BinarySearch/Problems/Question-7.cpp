//
// Created by vssin on 15-11-2025.
//

//
// Created by vssin on 15-11-2025.
//
#include <iostream>
#include <vector>
using namespace std;

int upperBound(const vector<int>& num, int key) {
    int ans = num.size();
    int start = 0, end = num.size() - 1;

    while (start <= end) {
        int mid = start + (end - start) / 2;

        if (num[mid] > key) {
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
    cout << upperBound(arr, 6);
}

//   -> Builtin library...
// #include <iostream>
// #include <vector>
// #include <algorithm>
// using namespace std;
//
// int main() {
//     vector<int> v = {1, 2, 2, 3, 5};
//
//     int key = 2;
//
//     auto it = upper_bound(v.begin(), v.end(), key);
//
//     cout << "Upper bound index: " << (it - v.begin()) << endl;
//
//     return 0;
// }


