//Given the radius of the circle predict whether numerically area of this circle is larger than the circumference or not.
#include <iostream>
using namespace std;
int main() {
  float radius;
  cout << "Enter the radius of the circle: ";
  cin >> radius;
  float area = 3.14159 * radius * radius;
  float circumference = 2 * 3.14159 * radius;
  cout << "Area of the circle: " << area << endl;
  cout << "Circumference of the circle: " << circumference << endl;

}