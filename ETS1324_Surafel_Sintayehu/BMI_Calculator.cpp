#include <iostream>

using namespace std;

int main() {
    int weight, height;
    char repeat = 'y';

    while (repeat == 'y' || repeat == 'Y') {
        cout << "Enter weight (in kilograms): ";
        while (!(cin >> weight) || weight <= 0) {
            cout << "Invalid weight. Please enter a positive number: ";
            cin.clear();  // Clear error flag
            cin.ignore(10000, '\n');  // Ignore incorrect input
        }

        cout << "Enter height (in centimeters): ";
        while (!(cin >> height) || height <= 0) {
            cout << "Invalid height. Please enter a positive number: ";
            cin.clear();  // Clear error flag
            cin.ignore(10000, '\n');  // Ignore incorrect input
        }

        float bmi = (float)weight / ((float)height / 100 * (float)height / 100);
        cout << "Your BMI is: " << bmi << endl;

        if (bmi < 18.5) {
            cout << "Underweight" << endl;
        } else if (bmi >= 18.5 && bmi < 25) {
            cout << "Normal weight" << endl;
        } else if (bmi >= 25 && bmi < 30) {
            cout << "Overweight" << endl;
        } else {
            cout << "Obese" << endl;
        }

        cout << "Do you want to calculate BMI again? (y/n): ";
        cin >> repeat;

        while (repeat != 'y' && repeat != 'Y' && repeat != 'n' && repeat != 'N') {
            cout << "Invalid input. Please enter 'y' or 'n': ";
            cin >> repeat;
        }
    }

    cout << "Thank you for using the BMI calculator!" << endl;
    return 0;
}

