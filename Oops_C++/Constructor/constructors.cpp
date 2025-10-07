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

    // ✅ Proper constructor
    Student(string n, int r, float g) {
        name = n;
        roll_no = r;
        cgpa = g;
    }
};

void print(Student s) {
    cout << "--------------------------\n";
    cout << "Student Details:\n";
    cout << "--------------------------\n";
    cout << "Name    : " << s.name << '\n';
    cout << "Roll No : " << s.roll_no << '\n';
    cout << "CGPA    : " << s.cgpa << '\n';
    cout << "--------------------------\n";
}

int main() {
    Student s1("Vishal Singh", 78, 8.2);
    Student s2("Jatin", 77, 8.0);
    print(s1);
    print(s2);
    return 0;
}
