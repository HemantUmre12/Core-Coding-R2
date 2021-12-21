#include <iostream>
using namespace std;

// ! function to decide whether number is even or odd //
bool isNumberEvenOrOdd(int n) {
    if(n % 2 == 0) {
        return true;
    }
    return false;
}

int main() {

    // TODO: Write a program to input a number from user and print if it is even or odd //

    int num;
    cout<<"Enter a number"<<endl;
    cin>>num;
    if(num == 0) {
        cout<<"0 is neither even nor odd"<<endl;
        return 0;
    }
    bool result = isNumberEvenOrOdd(num);
    if(result == true) {
        cout<<"It is Even"<<endl;
    }
    else{
        cout<<"It is Odd"<<endl;
    }

    return 0;
}