//
// Created by vssin on 09-10-2025.
//

#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {

    int arr[3][4];
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 4; j++) {
            cin >> arr[i][j];
        }
    }
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 4; j++) {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

}
