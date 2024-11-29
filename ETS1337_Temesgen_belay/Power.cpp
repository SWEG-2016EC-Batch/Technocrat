//Write a program that find the result of the expression x^y where the value of X and Y are entered by the user.//
#include <iostream>
#include <cmath> // For the pow() function
using namespace std;

int main() {
    double x, y, result;

    // Input values for x and y
    cout << "Enter the base (x): ";
    cin >> x;

    cout << "Enter the exponent (y): ";
    cin >> y;

    // Calculate x^y
    result = pow(x, y);

    // Display the result
    cout << x << " raised to the power of " << y << " is: " << result << endl;

    return 0;
}
