/*Make a program that calculates the Body Mass Index (BMI) of a person and determine weather the person is
in normal weight, under weight or over weight. BMI is calculated as (BMI = w/h*h). Make the program to
work for multiple person before terminated.*/

#include <iostream>
using namespace std;

int main() {
    float weight, height, bmi;
    char choice;

    do {
        // Input weight in kilograms
        cout << "Enter weight in kilograms: ";
        cin >> weight;

        // Input height in meters
        cout << "Enter height in meters: ";
        cin >> height;

        // Calculate BMI
        bmi = weight / (height * height);

        // Display BMI
        cout << " your BMI is : " << bmi << endl;

        // Provide BMI classification
        if (bmi < 18.5) {
            cout << "you are under weight " << endl;
        } else if (bmi >= 18.5 && bmi < 24.9) {
            cout << "you are a normal weight " << endl;
        } else if (bmi >= 25 && bmi < 29.9) {
            cout << "you are an over weight " << endl;
        } else {
            cout << "you are an obese" << endl;
        }

        // Ask if the user wants to calculate BMI for another person
        cout << "Do you want to calculate BMI for another person? (y/n): ";
        cin >> choice;

    } while (choice == 'y' || choice == 'Y'); // Repeat if the user enters 'y' or 'Y'

    cout << "we have finished. Goodbye!" << endl;
    return 0;
}

