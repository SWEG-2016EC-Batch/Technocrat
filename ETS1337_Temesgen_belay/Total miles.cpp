/*Write a program that prompts the capacity in gallons of an automobile fuel tank and the miles per gallons
the automobiles can be driven. The program outputs the number miles the automobile cam be driven
without refueling.*/

#include <iostream>
using namespace std;

int main() {
    // Declare variables
    double tankCapacity; // Capacity of the fuel tank in gallons
    double milesPerGallon; // Fuel efficiency in miles per gallon
    double totalMiles; // Total miles the car can travel without refueling

    // ask the user for input
    cout << "Enter the capacity of the fuel tank (in gallons): ";
    cin >> tankCapacity;
    if (tankCapacity <= 0) {
        cout << "Error: Tank capacity must be a positive number." << endl;
        return 1; // Exit the program with an error code
    }
    cout << "Enter the fuel efficiency (in miles per gallon): ";
    cin >> milesPerGallon;
    if (milesPerGallon <= 0) {
        cout << "Error: Fuel efficiency must be a positive number." << endl;
        return 1; // Exit the program with an error code
    }

    // Calculate the total miles
    totalMiles = tankCapacity * milesPerGallon;//we can also use() for the operator, but we can also omit it

    // Display the result
    cout << "The automobile can be driven " << totalMiles << " miles without refueling." << endl;

    return 0;
}
