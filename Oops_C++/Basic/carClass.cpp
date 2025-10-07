//
// Created by vssin on 07-10-2025.
//

#include <iostream>
#include <vector>
using namespace std;

class Car {
    public:
    string name;
    int price;
    int seat;
    string color;
    string type;
};

void print(Car c) {
    cout << "Car Details:\n"
         << "--------------------------\n"
         << "Name  : " << c.name << '\n'
         << "Price : " << c.price << '\n'
         << "Seats : " << c.seat << '\n'
         << "Color : " << c.color << '\n'
         << "Type  : " << c.type << '\n'
         << "--------------------------\n";
}




int main(int argc, char *argv[]) {
    Car c1;
    c1.name = "Honda City";
    c1.price = 1000000;
    c1.seat = 4;
    c1.color = "red";
    c1.type = "Syden";
    print(c1);

    Car c2;
    c2.name = "Maruti Swift";
    c2.price = 700000;
    c2.seat = 4;
    c2.color = "white";
    c2.type = "Hatchback";
    print(c2);

    Car c3;
    c3.name = "Toyota";
    c3.price = 4500000;
    c3.seat = 8;
    c3.color = "yellow";
    c3.type = "SUV";
    print(c3);

}
