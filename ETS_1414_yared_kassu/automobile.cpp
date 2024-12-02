#include <iostream>
using namespace std;

int main() {
    // Declaring variables
    int tank_capacity, miles_per_gallon, no_of_miles;

    // Input and validate tank capacity
    while (true) {
        cout << "Input the tank capacity in gallons: ";
        cin >> tank_capacity;

        if (cin.fail() || tank_capacity <= 0) { // Check for invalid input or non-positive value
            cin.clear();             // Clear error flag
            cin.ignore(1000, '\n');  // Discard invalid input
            cout << "Invalid input! Please enter a positive number for tank capacity." << endl;
        } else {
            break; // Valid input, exit the loop
        }
    }

    // Input and validate miles per gallon
    while (true) {
        cout << "Input the miles per gallon an automobile goes: ";
        cin >> miles_per_gallon;

        if (cin.fail() || miles_per_gallon <= 0) { // Check for invalid input or non-positive value
            cin.clear();             // Clear error flag
            cin.ignore(1000, '\n');  // Discard invalid input
            cout << "Invalid input! Please enter a positive number for miles per gallon." << endl;
        } else {
            break; // Valid input, exit the loop
        }
    }

    // Calculation
    no_of_miles = tank_capacity * miles_per_gallon;

    // Output the result
    cout << "The miles your automobile goes without refueling is: " << no_of_miles << endl;

    return 0;
}
