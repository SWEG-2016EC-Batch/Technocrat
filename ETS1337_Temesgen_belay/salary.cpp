#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    string employeeName;
    double weeklyHours, bonusRate, baseSalary, bonusPayment, grossSalary, netSalary;
    const double pensionRate = 0.05;
    const double taxRate = 0.15;

    // Input employee details
    cout << "Enter employee name: ";
    getline(cin, employeeName);
    cout << "Enter weekly working hours: ";
    cin >> weeklyHours;
    cout << "Enter bonus rate per hour: ";
    cin >> bonusRate;
    cout << "Enter base salary: ";
    cin >> baseSalary;

    // Calculate bonus payment
    bonusPayment = weeklyHours * bonusRate;

    // Calculate gross salary
    grossSalary = baseSalary + bonusPayment;

    // Calculate net salary after deductions
    double pension = grossSalary * pensionRate;
    double tax = grossSalary * taxRate;
    netSalary = grossSalary - (pension + tax);

    // Display results
    cout << fixed << setprecision(2);
    cout << "\nEmployee Name: " << employeeName << endl;
    cout << "Base Salary: " << baseSalary << endl;
    cout << "Bonus Payment: " << bonusPayment << endl;
    cout << "Gross Salary: " << grossSalary << endl;
    cout << "Deductions (Pension + Tax): " << pension + tax << endl;
    cout << "Net Salary: " << netSalary << endl;

    return 0;
}
