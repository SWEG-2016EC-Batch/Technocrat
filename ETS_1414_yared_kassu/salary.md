PROBLEM ANALYSIS:
Objective:
The goal of the program is to calculate an employee's net salary by considering:

Base salary
Weekly working hours
Bonus rate per hour
Pension deduction (5% of gross salary)
Tax deduction (15% of gross salary)
The program should display:

The employee’s gross salary (base salary + bonus).
The pension amount.
The tax amount.
The total deductions (pension + tax).
The employee’s net salary (gross salary - deductions).
Inputs:
Base salary: The basic salary of the employee.
Working hours: The total number of hours the employee worked in a week.
Bonus rate: The amount the employee earns for each hour worked.
Outputs:
Gross salary: Sum of base salary and bonus.
Pension: 5% of the gross salary.
Tax: 15% of the gross salary.
Net salary: Gross salary minus pension and tax deductions.
Formulae:
Bonus = Working hours × Bonus rate.
Gross Salary = Base salary + Bonus.
Pension = 5% of Gross Salary.
Tax = 15% of Gross Salary.
Deductions = Pension + Tax.
Net Salary = Gross Salary - Deductions.

ALGORITHM USING PSEUDOCODE:

START:
PROMPT the user to enter the base salary
READ the base salary into base_salary
PROMPT the user to enter the number of working hours
READ the working hours into working_hours
PROMPT the user to enter the bonus rate per hour
READ the bonus rate into bonus_rate
CALCULATE the bonus as bonus = working_hours * bonus_rate
CALCULATE the gross salary as gross_salary = base_salary + bonus
CALCULATE the pension as pension = 0.05 * gross_salary
CALCULATE the tax as tax = 0.15 * gross_salary
CALCULATE total deductions as deductions = pension + tax
CALCULATE the net salary as net_salary = gross_salary - deductions
DISPLAY the net salary
DISPLAY the detailed breakdown of:
        - Gross salary
        - Pension
        - Tax
        - Deductions

END:

