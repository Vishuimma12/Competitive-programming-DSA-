//
// Created by vssin on 07-10-2025.
//
#include <iostream>
using namespace std;

class Cricketer {
public:
    string name;
    int runs;

    // 🔹 Default Constructor
    Cricketer() {
        name = "Unknown";
        runs = 0;
        cout << "[Constructor Called] Cricketer created!" << endl;
    }

    // 🔹 Parameterized Constructor
    Cricketer(string n, int r) {
        name = n;
        runs = r;
        cout << "[Parameterized Constructor Called] Cricketer created: " << name << endl;
    }

    // 🔹 Member function
    void display() {
        cout << "Name: " << name << ", Runs: " << runs << endl;
    }

    // 🔹 Destructor
    ~Cricketer() {
        cout << "[Destructor Called] Cricketer destroyed: " << name << endl;
    }
};

int main() {
    cout << "=== Dynamic Allocation Learning ===" << endl;

    // 1️⃣ Dynamic allocation using 'new' (calls default constructor)
    Cricketer *ptr1 = new Cricketer;   // Memory allocated on heap
    ptr1->name = "Virat Kohli";
    ptr1->runs = 25000;

    cout << "\nAccessing first dynamic object:" << endl;
    ptr1->display();

    // 2️⃣ Dynamic allocation with parameterized constructor
    Cricketer *ptr2 = new Cricketer("Rohit Sharma", 23000);

    cout << "\nAccessing second dynamic object:" << endl;
    ptr2->display();

    // 3️⃣ Dynamic allocation of array of objects
    int n;
    cout << "\nEnter number of cricketers to create dynamically: ";
    cin >> n;

    Cricketer *team = new Cricketer[n]; // Creates n objects dynamically (calls default constructor)

    // Input details for each cricketer
    for (int i = 0; i < n; i++) {
        cout << "Enter name and runs for Cricketer " << i + 1 << ": ";
        cin >> team[i].name >> team[i].runs;
    }

    cout << "\n--- Team Details ---" << endl;
    for (int i = 0; i < n; i++) {
        team[i].display();
    }

    // 4️⃣ Memory cleanup (deallocation)
    cout << "\n[Deleting dynamically created objects...]" << endl;
    delete ptr1;     // Deletes single object
    delete ptr2;     // Deletes another single object
    delete[] team;   // Deletes dynamically created array

    cout << "[All dynamic memory freed successfully!]" << endl;

    return 0;
}
