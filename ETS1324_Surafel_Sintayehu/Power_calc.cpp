#include <iostream>
#include <cmath>
using namespace std;

int main() {
    double base, exponent, result;

    cout << "Enter the base value (x): ";
    cin >> base;

    cout << "Enter the exponent value (y): ";
    cin >> exponent;

    result = pow(base, exponent);

    cout << "The result of " << base << " raised to the power of " << exponent << " is " << result << endl;

    return 0;
}
