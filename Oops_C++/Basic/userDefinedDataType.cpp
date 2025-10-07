//
// Created by vssin on 07-10-2025.
//

#include <iostream>
using namespace std;

class Student { // Student is a new data type.
    public:
    string name;
    int roll_no;
    float cgpa;
};

int main(int argc, char *argv[]) {
    Student s1;
    s1.name = "Vishal";
    s1.roll_no = 10;
    s1.cgpa = 3.5;
    cout << s1.roll_no << endl;
    cout << s1.cgpa << endl;
    cout << s1.name << endl;

    Student s2;
    s2.name = "jatin";
    s2.roll_no = 11;
    s2.cgpa = 3.0;
    cout << s2.cgpa << endl;
    cout << s2.name << endl;
    cout << s2.roll_no << endl;

}
