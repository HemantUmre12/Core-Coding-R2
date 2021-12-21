#include "bits/stdc++.h"
using namespace std;


int main() {

    // TODO: Write a program to input a number from user and print all the even natural numbers smaller than the entered number //

    int num;
    cout<<"Enter a number"<<endl;
    cin>>num;
    cout<<"Even numbers smaller than "<<num<<" are :"<<endl;
    for(int currNumber = 2; currNumber < num; currNumber += 2){
        cout<<currNumber<<endl;
    }


    return 0;
}