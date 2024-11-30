#include <iostream>
using namespace std;
int main() {
    double weekly_hours,bonus_rate,base_salary;
    string employee_fullname;
    const float pension_rate = 0.05,tax_rate = 0.15;
    cout << "Your Name :  ";
    getline(cin , employee_fullname); 
    cout << "Enter weekly working hours: ";
    cin >> weekly_hours;
    cout << "Enter bonus rate per hour: ";
    cin >> bonus_rate;
    cout << "Enter base salary: ";
    cin >> base_salary;
    double grossSalary = base_salary + (bonus_rate * weekly_hours);
    double pensionDeduction = grossSalary * pension_rate;
    double taxDeduction = grossSalary * tax_rate; 
    double totalDeductions = pensionDeduction + taxDeduction;
    double netSalary = grossSalary - totalDeductions;
    double bonusPayment = bonus_rate * weekly_hours;
    cout << "Employee name:  " << employee_fullname << endl; 
    cout << "Your Bonus Payment is " << bonusPayment<<" birr" << endl;
    cout << "Your Gross Salary is " << grossSalary<<" birr" << endl;
    cout << "Your Net Salary is " << netSalary<<" birr" << endl;
    return 0;
}