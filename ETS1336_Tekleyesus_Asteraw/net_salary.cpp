#include<iostream>
using namespace std;
int main() {
    double basic_salary, hours, bonus_rate = 0, bonus = 0, pension, tax_rate, tax, net_salary, gross_salary;
    cout << "Enter your basic salary: ";
    cin >> basic_salary;
    cout << "Enter the hours worked: ";
    cin >> hours;

    if (hours > 40) {
        cout << "Enter the bonus rate: ";
        cin >> bonus_rate;
        bonus = (hours - 40) * bonus_rate;
    }

    gross_salary = basic_salary + bonus;
    pension = basic_salary * 0.07;

    if (basic_salary <= 200) {
        tax_rate = 0;
    } else if (basic_salary <= 600) {
        tax_rate = 0.1;
    } else if (basic_salary <= 1200) {
        tax_rate = 0.15;
    } else if (basic_salary <= 2000) {
        tax_rate = 0.2;
    } else if (basic_salary <= 3500) {
        tax_rate = 0.25;
    } else {
        tax_rate = 0.3;
    }

    tax = basic_salary * tax_rate;
    net_salary = gross_salary - pension - tax;
    cout << "Net salary: " << net_salary << endl;
    return 0;
}
