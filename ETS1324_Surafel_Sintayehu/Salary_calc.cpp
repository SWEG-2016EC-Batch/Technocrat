#include <iostream>
using namespace std;

int main() {
    double totalHoursWorked, hourlyBonus, baseIncome;
    double calculatedBonus, totalIncome, pensionContribution, taxLiability, totalDeductions, finalIncome;

    cout << "Enter the total hours worked in a week: ";
    cin >> totalHoursWorked;

    cout << "Enter the bonus rate per hour worked: ";
    cin >> hourlyBonus;

    cout << "Enter your base salary: ";
    cin >> baseIncome;

    calculatedBonus = totalHoursWorked * hourlyBonus;
    totalIncome = baseIncome + calculatedBonus;
    pensionContribution = totalIncome * 0.05;
    taxLiability = totalIncome * 0.15;
    totalDeductions = pensionContribution + taxLiability;
    finalIncome = totalIncome - totalDeductions;

    cout << "\nCalculated Bonus: " << calculatedBonus << endl;
    cout << "Total Income (Base + Bonus): " << totalIncome << endl;
    cout << "Pension Contribution: " << pensionContribution << endl;
    cout << "Tax Deduction: " << taxLiability << endl;
    cout << "Total Deductions (Pension + Tax): " << totalDeductions << endl;
    cout << "Final Net Income: " << finalIncome << endl;

    return 0;
}
