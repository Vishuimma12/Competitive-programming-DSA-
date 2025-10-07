//
// Created by vssin on 07-10-2025.
//

#include <iostream>
using namespace std;

class Student {
public:
    string name;
    int roll_no;
    float cgpa;

    // 1️⃣ Default Constructor
    Student() {
        cout << "[Default Constructor Called]\n";
    }

    // 2️⃣ Parameterized Constructor (Standard)
    Student(string n, int r, float g) {
        name = n;
        roll_no = r;
        cgpa = g;
        cout << "[Parameterized Constructor Called]\n";
    }

    // 3️⃣ Parameterized Constructor (Overloaded / Multiple Parameters)
    Student(string n, int r) {
        name = n;
        roll_no = r;
        cgpa = 0.0; // default value
        cout << "[Overloaded Parameterized Constructor Called]\n";
    }

    // 4️⃣ Copy Constructor
    Student(const Student &s) {
        name = s.name;
        roll_no = s.roll_no;
        cgpa = s.cgpa;
        cout << "[Copy Constructor Called]\n";
    }

    void display() const {
        cout << "--------------------------\n";
        cout << "Name    : " << name << '\n';
        cout << "Roll No : " << roll_no << '\n';
        cout << "CGPA    : " << cgpa << '\n';
        cout << "--------------------------\n";
    }

};

int main() {
    // 🔹 1. Default Constructor
    Student s1;
    s1.name = "Priyanshi";\
    s1.roll_no = 9;
    s1.cgpa = 9.5;
    s1.display();

    // 🔹 2. Parameterized Constructor
    Student s2("Vishal", 10, 8.2);
    s2.display();

    // 🔹 3. Overloaded Parameterized Constructor
    Student s3("Jatin", 11);
    s3.display();

    // 🔹 4. Copy Constructor
    Student s4 = s2; // OR Student s4(s2);
    s4.display();

    Student s5 (s3);
    s5.display();

    return 0;
}
