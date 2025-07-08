//
// Created by vssin on 05-07-2025.
//
#include <iostream>
using namespace std;

int main() {
    int number;
    cout<<"Enter a number:";
    cin>>number;
    int i=1;
    while (i<=number) {
        cout<<i<<endl;
        i=i+1;
    }

    //Sum of the total number
    int num;
    cout<<"Enter a number:";
    cin>>num;
    int sum=0;
    int first=1;
    while (num>=first) {
        sum=sum+first;
        first=first+1;
    }
    cout<<"The sum is:"<<sum<<endl;

    // Another method for calculating sum of number's
    int sumofno=0;
    sumofno = num/2*(1+num);
    cout<<"The sum of the number is:"<<sumofno<<endl;

    //Check prime or not
    int a;
    cout<<"Enter a number:";
    cin>>a;
    int c=2;
    while (c<a) {
        if (a%c==0) {
            cout<<"A is a Not prime number: "<<a<<endl;
            break;
        }
        else {
            cout<<"A is a Prime number: "<<a<<endl;
        }
        c=c+1;
    }
}