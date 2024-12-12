#include <iostream>
using namespace std;

int main() {
    const double PENSION_RATE = 0.07;
    double basic_salary, hours, bonus_rate = 0, bonus = 0, pension, tax_rate, tax, net_salary, gross_salary;

    cout << "Enter your basic salary: ";
    cin >> basic_salary;

    cout << "Enter the hours you have worked: ";
    cin >> hours;
     if (basic_salary < 0 || hours < 0) {
        cout << "Salary and hours worked cannot be negative." << endl;
        return 1;
    }

   
    if (hours > 40) {
        cout << "Enter the bonus rate: ";
        cin >> bonus_rate;
        bonus = (hours - 40) * bonus_rate;
    }

    gross_salary = basic_salary + bonus;
    pension = basic_salary * PENSION_RATE;

    
    if (basic_salary > 3500) {
        tax_rate = 0.3;
    } else if (basic_salary > 2000) {
        tax_rate = 0.25;
    } else if (basic_salary > 1200) {
        tax_rate = 0.2;
    } else if (basic_salary > 600) {
        tax_rate = 0.15;
    } else if (basic_salary > 200) {
        tax_rate = 0.1;
    } else {
        tax_rate = 0;
    }
    tax = basic_salary * tax_rate;
    net_salary = gross_salary - (pension + tax);
    
    cout << "Basic Salary: " << basic_salary << endl;
    cout << "Bonus: " << bonus << endl;
    cout << "Gross Salary: " << gross_salary << endl;
    cout << "Pension: " << pension << endl;
    cout << "Tax: " << tax << endl;
    cout << "Net Salary: " << net_salary << endl;

    return 0;
}
