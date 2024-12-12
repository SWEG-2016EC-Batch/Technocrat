#include <iostream>
#include <string> // Include string library for handling strings
using namespace std;

int main() {
    // Declare variables
    string name; // Variable to store user's name
    double working_hours, bonus_rate, base_salary;
    double bonus, gross_salary, pension, tax, deductions, net_salary;

    // Input user's name
    cout << "Enter your name: ";
    getline(cin, name); // Use getline to capture the full name, including spaces

    // Input and validate weekly working hours
    while (true) {
        cout << "Enter weekly working hours: ";
        cin >> working_hours;

        if (cin.fail() || working_hours < 0) { // Check for invalid input or negative values
            cin.clear();             // Clear error flag
            cin.ignore(1000, '\n');  // Discard invalid input
            cout << "Invalid input! Please enter a non-negative number for working hours." << endl;
        } else {
            break; // Valid input, exit the loop
        }
    }

    // Input and validate bonus rate per hour
    while (true) {
        cout << "Enter bonus rate per hour: ";
        cin >> bonus_rate;

        if (cin.fail() || bonus_rate < 0) { // Check for invalid input or negative values
            cin.clear();             // Clear error flag
            cin.ignore(1000, '\n');  // Discard invalid input
            cout << "Invalid input! Please enter a non-negative number for bonus rate." << endl;
        } else {
            break; // Valid input, exit the loop
        }
    }

    // Input and validate base salary
    while (true) {
        cout << "Enter base salary: ";
        cin >> base_salary;

        if (cin.fail() || base_salary < 0) { // Check for invalid input or negative values
            cin.clear();             // Clear error flag
            cin.ignore(1000, '\n');  // Discard invalid input
            cout << "Invalid input! Please enter a non-negative number for base salary." << endl;
        } else {
            break; // Valid input, exit the loop
        }
    }

    // Perform calculations
    bonus = working_hours * bonus_rate;
    gross_salary = base_salary + bonus;

    // Determine tax based on gross salary
    if (gross_salary <= 200) {
        tax = 0;
    } else if (gross_salary <= 600) {
        tax = 0.10 * gross_salary;
    } else if (gross_salary <= 1200) {
        tax = 0.15 * gross_salary;
    } else if (gross_salary <= 2000) {
        tax = 0.20 * gross_salary;
    } else if (gross_salary <= 3500) {
        tax = 0.25 * gross_salary;
    } else {
        tax = 0.30 * gross_salary;
    }

    pension = 0.05 * gross_salary; // Pension is 5% of gross salary
    deductions = pension + tax;    // Total deductions
    net_salary = gross_salary - deductions; // Net salary after deductions

    // Output results with user's name
    cout << "\nHello, " << name << "!" << endl;
    cout << "Here is your salary breakdown:" << endl;
    cout << "Bonus Payment: " << bonus << endl;
    cout << "Gross Salary: " << gross_salary << endl;
    cout << "Pension Deduction: " << pension << endl;
    cout << "Tax Deduction: " << tax << endl;
    cout << "Total Deductions: " << deductions << endl;
    cout << "Net Salary: " << net_salary << endl;

    return 0;
}