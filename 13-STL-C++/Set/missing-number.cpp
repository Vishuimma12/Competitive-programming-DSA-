//
// Created by vssin on 12-10-2025.
//

#include <iostream>
#include <set>
using namespace std;

int main(int argc, char *argv[]) {
    int arr[]= {0,4,2,1,5};
    set <int> s;

    for(int i=0;i<5;i++) { // insertion
        s.emplace(arr[i]);
    }
    for (int x : s) {  //print set
        cout << x << " ";
    };

}
