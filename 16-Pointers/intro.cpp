#include <iostream>
#include <string>
using namespace std;

int main() {

    // ---------------- INT ----------------
    int a = 10;
    int *p1 = &a;

    cout << "INT example:\n";
    cout << "Value of a: " << a << endl;
    cout << "Address of a: " << &a << endl;
    cout << "Value using pointer *p1: " << *p1 << endl;
    cout << "Address stored in p1: " << p1 << endl;
    cout << endl;


    // ---------------- CHAR ----------------
    char ch = 'X';
    char *p2 = &ch;

    cout << "CHAR example:\n";
    cout << "Value of ch: " << ch << endl;
    cout << "Address of ch: " << &ch << endl;
    cout << "Value using pointer *p2: " << *p2 << endl;
    cout << "Address stored in p2: " << p2 << endl;
    cout << endl;


    // ---------------- FLOAT ----------------
    float f = 5.73;
    float *p3 = &f;

    cout << "FLOAT example:\n";
    cout << "Value of f: " << f << endl;
    cout << "Address of f: " << &f << endl;
    cout << "Value using pointer *p3: " << *p3 << endl;
    cout << "Address stored in p3: " << p3 << endl;
    cout << endl;


    // ---------------- DOUBLE ----------------
    double d = 99.1234;
    double *p4 = &d;

    cout << "DOUBLE example:\n";
    cout << "Value of d: " << d << endl;
    cout << "Address of d: " << &d << endl;
    cout << "Value using pointer *p4: " << *p4 << endl;
    cout << "Address stored in p4: " << p4 << endl;
    cout << endl;


    // ---------------- BOOL ----------------
    bool flag = true;
    bool *p5 = &flag;

    cout << "BOOL example:\n";
    cout << "Value of flag: " << flag << endl;
    cout << "Address of flag: " << &flag << endl;
    cout << "Value using pointer *p5: " << *p5 << endl;
    cout << "Address stored in p5: " << p5 << endl;
    cout << endl;


    // ---------------- STRING ----------------
    string name = "Vishu";
    string *p6 = &name;

    cout << "STRING example:\n";
    cout << "Value of name: " << name << endl;
    cout << "Address of name: " << &name << endl;
    cout << "Value using pointer *p6: " << *p6 << endl;
    cout << "Address stored in p6: " << p6 << endl;
    cout << endl;

    //what if *p++ ?
    int arr[3] = {10, 20, 30};
    int *p = arr;   // p points to arr[0]

    cout << "Starting pointer value (p): " << p << endl;
    cout << "Starting *p (value at pointer): " << *p << endl << endl;


    // ---------------- 1. *p++ ----------------
    cout << "1. *p++" << endl;
    cout << *p++ << endl;
    // Explanation:
    // *p++  → prints 10 (value at arr[0]), then pointer moves to arr[1]

    cout << "Pointer now points to: " << p << " (should be arr[1])" << endl;
    cout << "Value at new p: " << *p << endl << endl;


    // Reset pointer to beginning
    p = arr;


    // ---------------- 2. (*p)++ ----------------
    cout << "2. (*p)++" << endl;
    cout << (*p)++ << endl;
    // Explanation:
    // (*p)++ → prints 10, then increases arr[0] to 11
    // pointer does NOT move

    cout << "Value at p after increment: " << *p << " (should be 11)" << endl;
    cout << "Pointer still at: " << p << endl << endl;


    // Reset array value
    arr[0] = 10;
    p = arr;


    // ---------------- 3. ++*p ----------------
    cout << "3. ++*p" << endl;
    cout << ++*p << endl;
    // Explanation:
    // ++*p → increases value first (10 → 11), then prints 11

    cout << "Value at p after ++*p: " << *p << endl << endl;


    // Reset array value
    arr[0] = 10;
    p = arr;


    // ---------------- 4. p++ ----------------
    cout << "4. p++" << endl;
    cout << "Pointer before: " << p << endl;
    p++;
    cout << "Pointer after: " << p << " (should move to arr[1])" << endl;
    cout << "Value at new p: " << *p << endl << endl;


    // Reset pointer
    p = arr;


    // ---------------- 5. ++p ----------------
    cout << "5. ++p" << endl;
    cout << "Pointer before: " << p << endl;
    ++p;
    cout << "Pointer after: " << p << " (should move to arr[1])" << endl;
    cout << "Value at new p: " << *p << endl << endl;
    // After:  p → arr[1]



    return 0;
}
