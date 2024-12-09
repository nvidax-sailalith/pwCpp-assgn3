//If the marks of A, B and C are input through the keyboard, write a program to determine the student scoring least marks. 
#include <iostream>
using namespace std;
int main() {
    int marksA, marksB, marksC, least;
    cout << "Enter the marks of A: ";
    cin >> marksA;
    cout << "Enter the marks of B: ";
    cin >> marksB;
    cout << "Enter the marks of C: ";
    cin >> marksC;
    least = marksA;
    if (marksB < least) {
        least = marksB;
    }
    if (marksC < least) {
        least = marksC;
    }
    cout << "The student with the least marks is: " << least << endl;
}