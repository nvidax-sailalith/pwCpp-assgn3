//Given the length and breadth of a rectangle, write a program to find whether numerically the area of the rectangle is greater than its perimeter.
#include <iostream>
using namespace std;
int main() {
    int length, breadth, area, per;
    cout << "Enter the length of the rectangle: ";
    cin >> length;
    cout << "Enter the breadth of the rectangle: ";
    cin >> breadth;
    area = length * breadth;
    per = 2 * (length + breadth);

    if (area > per) {
        cout << "Area is greater than perimeter." << endl;
    } else {
        cout << "Perimeter is greater than or equal to area." << endl;
    }

}