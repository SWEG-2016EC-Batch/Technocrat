# problem analysis
## Inputs:
1. Employee Full Name
2. Weekly Working Hours
3. Bonus Rate per Hour
4. Base Salary
# process
1. base_salary + (bonus_rate * weekly_hours)  
2. pensionDeduction = grossSalary * pension_rate  
3 taxDeduction = grossSalary * tax_rate  
4. totalDeductions = pensionDeduction + taxDeduction  
5. netSalary = grossSalary - totalDeductions  
6. bonusPayment = bonus_rate * weekly_hours
## Outputs:
1. Bonus Payment
2. Gross Salary
3. Net Salary
# psedocode
1. Step1: start the program.
2. Step2: read employee name, working hour, base salary, bonus rate.
3. Step3: calculate Gross Salary = Base Salary + (Bonus Rate * Weekly Hours)
4. Pension Deduction = Gross Salary * Pension Rate
5. Tax Deduction = Gross Salary * Tax Rate
6. Net Salary = Gross Salary - (Pension Deduction + Tax Deduction)
7. Bonus Payment = Bonus Rate * Weekly Hours
8. Step4: print pension and tax deductions, net salary.
9 Step5: end the program.
# flow chart
flowchart TD
    A[Start] --> B[Input: Employee Full Name]
    B --> C[Input: Weekly Working Hours]
    C --> D[Input: Bonus Rate Per Hour]
    D --> E[Input: Base Salary]
    E --> F[Calculate: Gross Salary = Base Salary + (Bonus Rate * Weekly Hours)]
    F --> G[Calculate: Pension Deduction = Gross Salary * 0.05]
    G --> H[Calculate: Tax Deduction = Gross Salary * 0.15]
    H --> I[Calculate: Total Deductions = Pension Deduction + Tax Deduction]
    I --> J[Calculate: Net Salary = Gross Salary - Total Deductions]
    J --> K[Calculate: Bonus Payment = Bonus Rate * Weekly Hours]
    K --> L[Output: Employee Name, Bonus Payment, Gross Salary, Net Salary]
    L --> M[End]
