#include <iostream>
using namespace std;

int main() {
    double tankCapacity, fuelEfficiency, distance;

    cout << "Enter the fuel tank capacity in gallons: ";
    cin >> tankCapacity;

    cout << "Enter the fuel efficiency in miles per gallon: ";
    cin >> fuelEfficiency;

    distance = tankCapacity * fuelEfficiency;

    cout << "With a full tank, the vehicle can travel " << distance << " miles before needing to refuel." << endl;

    return 0;
}
