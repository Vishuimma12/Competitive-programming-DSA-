#include <iostream>
#include <bitset>

int main() {
    int num = -5;

    // Display binary using 32 bits
    std::bitset<32> binary(num);
    std::cout << "Binary representation of " << num << " is: " << binary << std::endl;

    return 0;
}
