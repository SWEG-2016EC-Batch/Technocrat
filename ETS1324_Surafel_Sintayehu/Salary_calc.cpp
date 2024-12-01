#include <iostream>
using namespace std;

int main() {
    // Declare variables for fuel tank capacity, miles per gallon, and miles per tank
    float fuel_tank_capacity, miles_per_gallon, miles_per_tank;

    // Input fuel tank capacity and miles per gallon
    cout << "Enter the fuel tank capacity in gallons: ";
    cin >> fuel_tank_capacity;
    cout << "Enter the miles per gallon the automobile can drive: ";
    cin >> miles_per_gallon;

    // Calculate miles per tank
    miles_per_tank = fuel_tank_capacity * miles_per_gallon;

    // Output the result
    cout << "The automobile can be driven " << miles_per_tank << " miles without refueling." << endl;

    return 0;
}
