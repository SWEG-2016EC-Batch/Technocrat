#include <iostream>
using namespace std;

int main() {
    char choice;

    do {
        double weight, height, bmi;

        while (true) {
            // Input weight
            cout << "Enter weight in kilograms: ";
            cin >> weight;

            if (cin.fail() || weight <= 0) { // Check for invalid input or non-positive weight
                cin.clear();             // Clear error flag
                cin.ignore(1000, '\n');  // Discard invalid input
                cout << "Invalid input! Please enter a positive number for weight." << endl;
            } else {
                break; // Valid input, exit the loop
            }
        }

        while (true) {
            // Input height
            cout << "Enter height in meters: ";
            cin >> height;

            if (cin.fail() || height <= 0) { // Check for invalid input or non-positive height
                cin.clear();             // Clear error flag
                cin.ignore(1000, '\n');  // Discard invalid input
                cout << "Invalid input! Please enter a positive number for height." << endl;
            } else {
                break; // Valid input, exit the loop
            }
        }

        // Calculate BMI
        bmi = weight / (height * height);

        // Determine category
        if (bmi < 18.5)
            cout << "Your BMI is " << bmi << " (Underweight)" << endl;
        else if (bmi < 24.9)
            cout << "Your BMI is " << bmi << " (Normal weight)" << endl;
        else
            cout << "Your BMI is " << bmi << " (Overweight)" << endl;

        // Ask if the user wants to calculate again
        cout << "Do you want to calculate BMI for another person? (write 'y' or 'Y' for yes/any other key for no): ";
        cin >> choice;

    } while (choice == 'y' || choice == 'Y');

    cout << "Thank you for using, goodbye!" << endl;
    return 0;
}
