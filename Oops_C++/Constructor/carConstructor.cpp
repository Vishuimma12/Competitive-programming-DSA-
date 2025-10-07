//
// Created by vssin on 07-10-2025.
//

#include <iostream>
using namespace std;

class Car {
public:
    string name;
    int price;
    int seat;
    string color;
    string type;

    Car(string n, int p, int s, string c, string t) {
        name = n;
        price = p;
        seat = s;
        color = c;
        type = t;

    }
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

int main() {
    Car c1("Honda City", 1000000, 4, "Red", "Sedan");
    Car c2("Maruti Swift", 700000, 4, "White", "Hatchback");
    Car c3("Toyota Fortuner", 4500000, 8, "Yellow", "SUV");

    print(c1);
    print(c2);
    print(c3);

    return 0;
}
