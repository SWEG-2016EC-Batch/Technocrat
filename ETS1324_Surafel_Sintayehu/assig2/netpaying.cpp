#include <iostream>
using namespace std;

int main() {
    double salary, hoursWorked, bonusRate, overtimeBonusRate = 0;
    double totalSalary, extraBonus = 0, retirementFund, taxDeduction = 0, finalSalary;

    cout << "Enter Salary: ";
    cin >> salary;
    cout << "Enter Hours Worked: ";
    cin >> hoursWorked;
    cout << "Enter Bonus Rate: ";
    cin >> bonusRate;

    if (hoursWorked > 40) {
        cout << "Enter Overtime Bonus Rate: ";
        cin >> overtimeBonusRate;
        extraBonus = (hoursWorked - 40) * overtimeBonusRate;
    }

    totalSalary = salary + extraBonus;

    double rate = 0;
    if (totalSalary > 3500) rate = 0.3;
    else if (totalSalary > 2000) rate = 0.25;
    else if (totalSalary > 1200) rate = 0.2;
    else if (totalSalary > 600) rate = 0.15;
    else if (totalSalary > 200) rate = 0.1;

    retirementFund = salary * 0.07;
    taxDeduction = totalSalary * rate;
    finalSalary = totalSalary - retirementFund - taxDeduction;

    cout << "Total Salary: " << totalSalary << " Br" << endl;
    cout << "Retirement Fund: " << retirementFund << " Br" << endl;
    cout << "Tax Deduction: " << taxDeduction << " Br" << endl;
    cout << "Final Salary: " << finalSalary << " Br" << endl;

    return 0;
}

