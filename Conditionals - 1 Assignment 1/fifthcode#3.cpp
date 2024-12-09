//Write a program to input sides of a triangle and check whether a triangle is equilateral, scalene or isosceles triangle.
#include <iostream>
using namespace std;
int main() {
    int side1, side2, side3;
    cout << "Enter the sides of the triangle: ";
    cin >> side1 >> side2 >> side3;
    if (side1 == side2 && side2 == side3) {
        cout << "The triangle is equilateral." << endl;
    } else if (side1 != side2 && side2 != side3 && side1 != side3) {
        cout << "The triangle is scalene." << endl;
    } else {
        cout << "The triangle is isosceles." << endl;
    }
}