#include <iostream>
using namespace std;

int main() {
    char choice;

    do {
        double weight, height, bmi;

        // Input weight and height
        cout << "Enter weight in kilograms: ";
        cin >> weight;
        cout << "Enter height in meters: ";
        cin >> height;

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

    cout << "thank you for using, goodbye" << endl;
    return 0;
}
