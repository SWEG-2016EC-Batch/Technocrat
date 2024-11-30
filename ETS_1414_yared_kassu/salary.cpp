#include <iostream>
using namespace std;

int main() {
    // Declare variables
    double working_hours, bonus_rate, base_salary;
    double bonus, gross_salary, pension, tax, deductions, net_salary;

    // Input values
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

    // Output results
    cout << "\nBonus Payment: " << bonus << endl;
    cout << "Gross Salary: " << gross_salary << endl;
    cout << "Pension Deduction: " << pension << endl;
    cout << "Tax Deduction: " << tax << endl;
    cout << "Total Deductions: " << deductions << endl;
    cout << "Net Salary: " << net_salary << endl;

    return 0;
}
