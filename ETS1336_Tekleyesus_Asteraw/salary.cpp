#include <iostream> 
#include<string>
using namespace std;

int main() {
    double weekly_hours;
    double bonus_rate;
    string employee_fullname;
    double base_salary;
    const float pension_rate = 0.05;
    const float tax_rate = 0.15;
    cout << "Enter the Employee fullname:  ";
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
    cout << "Dear our industrious employee " << employee_fullname << endl; 
    cout << "   Your Bonus Payment is " << bonusPayment<<" birr" << endl;
    cout << "   Your Gross Salary is " << grossSalary<<" birr" << endl;
    cout << "   Your Net Salary is " << netSalary<<" birr" << endl;
    return 0;
}
