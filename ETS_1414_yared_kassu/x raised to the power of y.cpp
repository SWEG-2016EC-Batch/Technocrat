#include <iostream>
#include <cmath> // For the pow() function
using namespace std;

int main() {
    double x, y, result;

    // Input and validate the base (x)
    while (true) {
        cout << "Enter the base (x): ";
        cin >> x;

        if (cin.fail()) { // Check for invalid input
            cin.clear();             // Clear error flag
            cin.ignore(1000, '\n');  // Discard invalid input
            cout << "Invalid input! Please enter a valid number for the base (x)." << endl;
        } else {
            break; // Valid input, exit the loop
        }
    }

    // Input and validate the exponent (y)
    while (true) {
        cout << "Enter the exponent (y): ";
        cin >> y;

        if (cin.fail()) { // Check for invalid input
            cin.clear();             // Clear error flag
            cin.ignore(1000, '\n');  // Discard invalid input
            cout << "Invalid input! Please enter a valid number for the exponent (y)." << endl;
        } else {
            break; // Valid input, exit the loop
        }
    }

    // Calculate x^y using the pow() function
    result = pow(x, y);

    // Display the result
    cout << x << " raised to the power " << y << " is: " << result << endl;

    return 0;
}
