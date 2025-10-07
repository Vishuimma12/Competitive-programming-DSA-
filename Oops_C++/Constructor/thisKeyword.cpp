//
// Created by vssin on 07-10-2025.
//

#include <iostream>
using namespace std;

class Cricketer {
    public:
    string name;
    int run;
    Cricketer(string name, int run) {
        this->name = name; // Used when the parameter name and data member name are same use this keyword...
        this->run = run;
    }
};

void dispaly(Cricketer c) {
    cout << c.name << endl;
    cout << c.run << endl;

}

int main(int argc, char *argv[]) {
    Cricketer c1("Rohit Sharma", 25000);
    dispaly(c1);
}
