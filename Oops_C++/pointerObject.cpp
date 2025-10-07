#include <iostream>
using namespace std;

class Cricketer {
public:
    string name;
    int runs;

    // Default constructor
    Cricketer() {
        name = "Unknown";
        runs = 0;
    }

    // Parameterized constructor
    Cricketer(string n, int r) {
        name = n;
        runs = r;
    }

    // Member function to display cricketer details
    void display() {
        cout << "Name: " << name << ", Runs: " << runs << endl;
    }
};

int main() {
    // 1️⃣ Object pointer type — must be of same class type
    Cricketer *ptr = nullptr; // Always initialize pointers to avoid wild pointers

    // 2️⃣ Store address — create a normal object
    Cricketer c1("Virat Kohli", 25000);
    ptr = &c1; // assign object address to pointer

    cout << "Accessing object using pointer:" << endl;

    // 3️⃣ Access members using -> or (*ptr)
    cout << "Name: " << ptr->name << endl;    // using ->
    cout << "Runs: " << (*ptr).runs << endl;  // using (*ptr)

    // 4️⃣ Function access
    ptr->display(); // calling display() through pointer

    cout << "\n------------------------------\n";

    // 5️⃣ Default pointer value — demonstrate safety check
    Cricketer *safePtr = nullptr;
    if (safePtr == nullptr) {
        cout << "safePtr is null, assigning new memory dynamically...\n";
    }

    // 6️⃣ Dynamic allocation — create object on heap
    safePtr = new Cricketer("Rohit Sharma", 23000);
    safePtr->display();

    cout << "\n------------------------------\n";

    // 7️⃣ Memory cleanup — release dynamically allocated memory
    delete safePtr;
    safePtr = nullptr; // best practice to avoid dangling pointer

    cout << "Memory released successfully!\n";

    return 0;
}

//
// 🧠 What is an Object Pointer?
//
// An object pointer is simply a pointer variable that stores the address of an object of a class.
//
// Just like you have:
//
// int *p;   // pointer to an integer
// float *q; // pointer to a float
//
//
// You can have:
//
// Cricketer *ptr;  // pointer to an object of class Cricketer
//
//
// This means ptr can store the address of a Cricketer object.
//
// 💡 Code Breakdown and Concepts
//
// Let’s go through your code step-by-step:
//
// #include <iostream>
// using namespace std;
//
// class Cricketer {
// public:
//     string name;
//     int runs;
//
//     void display() {
//         cout << "Name: " << name << ", Runs: " << runs << endl;
//     }
// };
//
// // 🔸 Class Definition
// //
// // The class Cricketer has two data members:
// // name (string), runs (int).
// //
// // It has one member function display() that prints those details.
// //
// // This defines a blueprint (a data type) for creating cricketer objects.
// //
// // 🔸 Creating a Normal Object
// // Cricketer c1;
// // c1.name = "Virat Kohli";
// // c1.runs = 25000;
// //
// //
// // c1 is a normal object of class Cricketer.
// //
// // It stores data separately in memory:
// //
// // c1:
// //  ├── name → "Virat Kohli"
// //  └── runs → 25000
// //
// // 🔸 Creating an Object Pointer
// // Cricketer *ptr;
// // ptr = &c1;   // assign address of object c1
// //
// //
// // ptr is a pointer of type Cricketer*
// //
// // It can only point to objects of type Cricketer.
// //
// // Now ptr holds the address of object c1.
// //
// // 👉 Visually:
// //
// // ptr -----> [ c1 (object) ]
// //               ├── name: "Virat Kohli"
// //               └── runs: 25000
// //
// // 🧩 Accessing Members Using Pointer
// //
// // There are two ways to access class members:
// //
// // Access Type	Operator	Example	Meaning
// // Using object	. (dot)	c1.display()	Normal object access
// // Using pointer	-> (arrow)	ptr->display()	Pointer to object access
// // 🔹 Why -> (Arrow Operator) is Needed?
// //
// // Because ptr is not an object —
// // it only stores the address of the object.
// //
// // So:
// //
// // ptr->name   ✅  // means (*ptr).name
// // ptr->runs   ✅  // means (*ptr).runs
// //
// //
// // ➡️ ptr->name is shorthand for (*ptr).name.
// //
// // That’s why we prefer using -> for clarity and simplicity.
// //
// // 🧠 Function Call Through Pointer
// // ptr->display();  // same as c1.display()
// //
// //
// // Here, ptr points to c1.
// //
// // So it calls display() function for the object c1.
// //
// // Internally, it executes (*ptr).display().
// //
// // ✅ Output:
// //
// // Access using pointer:
// // Name: Virat Kohli
// // Runs: 25000
// // Name: Virat Kohli, Runs: 25000