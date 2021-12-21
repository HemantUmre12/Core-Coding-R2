#include "bits/stdc++.h"
using namespace std;

int findMax(int a, int b, int c) {
    int maxVal = INT_MIN;
    if(a > maxVal) {
        maxVal = a;
    }
    if(b > maxVal) {
        maxVal = b;
    }
    if(c > maxVal) {
        maxVal = c;
    }
    return maxVal;
    // ! return max(max(a, b), c); //
}

int main() {

    // TODO: Write a program to input three numbers from user and find the maximum of them.

    int a, b, c;
    cout<<"Enter three numbers"<<endl;
    cin>>a>>b>>c;

    int maxNumber = findMax(a, b, c);
    cout<<"The maximum is "<<maxNumber<<endl;

    return 0;
}