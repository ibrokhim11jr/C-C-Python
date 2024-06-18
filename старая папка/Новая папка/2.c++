#include <iostream>
#include <cmath>

using namespace std;

int main() {
double x, y, q;

cout << "Enter the value of x: ";
cin >> x;

cout << "Enter the value of y: ";
cin >> y;

q = 7.25 * sin(x) - abs(y);

cout << "The value of the function q = 7.25sin(x) - |y| is: " << q << endl;

return 0;
}