#include <iostream>
#include <string>
using namespace std;

int main() {
    string employee_name;
    float weekly_working_hours, bonus_rate_per_hour, base_salary;
    float bonus_payment, gross_salary, net_salary;

    // Input: employee name
    cout << "Enter employee name: ";
    getline(cin, employee_name);

    // Input: weekly working hours
    cout << "Enter weekly working hours: ";
    cin >> weekly_working_hours;

    // Input: bonus rate per hour
    cout << "Enter bonus rate per hour: ";
    cin >> bonus_rate_per_hour;

    // Input: base salary
    cout << "Enter base salary: ";
    cin >> base_salary;

    // Calculate bonus payment
    bonus_payment = weekly_working_hours * bonus_rate_per_hour;

    // Calculate gross salary
    gross_salary = base_salary + bonus_payment;

    // Calculate net salary (after pension and tax deductions)
    net_salary = gross_salary - (gross_salary * (0.05 + 0.15));

    // Output results
    cout << "Employee Name: " << employee_name << endl;
    cout << "Gross Salary: " << gross_salary << endl;
    cout << "Net Salary: " << net_salary << endl;
    cout << "Bonus Payment: " << bonus_payment << endl;

    return 0;
}
