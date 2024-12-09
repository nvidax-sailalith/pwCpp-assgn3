//Given three points (x1, y1), (x2, y2) and (x3, y3), write a program to check if all the three points fall on one straight line.
#include <iostream>
#include <cstdlib>
using namespace std;
int main() {
    int x1, y1, x2, y2, x3, y3;
    cout << "Enter the coordinates of the three points: ";
    cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3;
    int area = abs((x1*(y2-y3) + x2*(y3-y1) + x3*(y1-y2))/2);
    if (area == 0) {
        cout << "The three points are collinear." << endl;
    } else {
        cout << "The three points are not collinear." << endl;
    }
}