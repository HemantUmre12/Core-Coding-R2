#include "bits/stdc++.h"
using namespace std;

bool isLeapYear(int year) {
    if(year % 4 == 0 && year % 100 != 0) {
        return true;
    }
    if(year % 400 == 0) {
        return true;
    }
    return false;
}

int main() {

    // TODO: Write a program to input a year from user and print if the year is a leap year.

    int year;
    cout<<"Enter year"<<endl;
    cin>>year;

    bool result = isLeapYear(year);
    if(result == true) {
        cout<<"It is a leap year"<<endl;
    }
    else {
        cout<<"It is not a leap year"<<endl;
    }

    return 0;
}