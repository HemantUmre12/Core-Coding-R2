#include "bits/stdc++.h"
using namespace std;

// ! functions to find Areas //

int areaOfSq(int side) {
    int area = side * side;
    return area;
}

int areaOfRec(int length, int breadth) {
    int area = length * breadth;
    return area;
}

float areaOfCir(int radius) {
    float area = 3.14 * radius * radius;
    return area;
}

float areaOfEqTri(int side) {
    float area = (1.732 / 4) * side * side;
    return area;
}

int main() {

    // TODO: Write a program to input three numbers from user and find the maximum of them.
    
    int choice;
    cout<<"1. Area of square \n2. Area of rectangl\n3. Area of circle \n4. Area of Equilateral triangle \nEnter your choice : "<<endl;
    cin>>choice;
    switch (choice)
    {
    case 1:
        {
            int side;
            cout<<"Enter the side of square"<<endl;
            cin>>side;
            int area = areaOfSq(side);
            cout<<"The area of square is "<<area<<endl;
            break;
        }
    case 2:
        {
            int length, breadth;
            cout<<"Enter the length and breadth of the rectangle"<<endl;
            cin>>length>>breadth;
            int area = areaOfRec(length, breadth);
            cout<<"The area of rectangle is "<<area<<endl;
            break;
        }
    case 3:
        {
            int radius;
            cout<<"Enter the radius of circle"<<endl;
            cin>>radius;
            float area = areaOfCir(radius);
            cout<<"The area of circle is "<<area<<endl;
            break;
        }
    case 4:
        {
            int side;
            cout<<"Enter the side of equilateral triangle"<<endl;
            cin>>side;
            float area = areaOfEqTri(side);
            cout<<"The area of equilateral triangle is "<<area<<endl;
            break;
        }
    
    default:
        cout<<"!!ERROR : Invalid Input"<<endl;
        break;
    }

    return 0;
}