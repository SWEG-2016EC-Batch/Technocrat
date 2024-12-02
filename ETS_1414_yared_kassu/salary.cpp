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

    // Input other values
    cout << "Enter weekly working hours: ";
    cin >> working_hours;
    cout << "Enter bonus rate per hour: ";
    cin >> bonus_rate;
    cout << "Enter base salary: ";
    cin >> base_salary;

    // Perform calculations
    bonus = working_hours * bonus_rate;
    gross_salary = base_salary + bonus;
    pension = 0.05 * gross_salary;
    tax = 0.15 * gross_salary;
    deductions = pension + tax;
    net_salary = gross_salary - deductions;

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
