#include "bits/stdc++.h"
using namespace std;

int findTheSum(int n) {
    int sum = 0;
    for(int i = 1; i <= n; i++) {
        sum += i;
    }
    return sum;
    // return (n * (n+1))/ 2;
}

int main() {

    // TODO: Write a program to input a natural number N from the user and print the sum of all the natural number till N.//

    int num;
    cout<<"Enter a number"<<endl;
    cin>>num;

    int sum = findTheSum(num);
    cout<<"The sum is "<<sum<<endl;


    return 0;
}