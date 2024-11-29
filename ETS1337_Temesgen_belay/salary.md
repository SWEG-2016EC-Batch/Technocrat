/*Design an algorithm and write a to read an employee name weekly working hours, bonus rate per hour and
base salary and find the employees gross-salary, net salary and bonus payment. (Hint: pension rate – 5%,
tax: 15%).*/

The Algorithm for the above problem 
stage 1 problem analysis 
input 
Employee's name (string)
Weekly working hours (double)
Bonus rate per hour (double)
Base salary (double)

prosess 
Bonus Calculation: Multiply weekly working hours by the bonus rate per hour.
Gross Salary Calculation: Add the base salary to the bonus payment.
Deductions Calculation: Calculate pension as 5% of the gross salary.
                        Calculate tax as 15% of the gross salary.
Net Salary Calculation: Subtract pension and tax from the gross salary.

output 
Display the employee's name, base salary, bonus payment, gross salary, deductions, and net salary.

stage 2 pseudocode 
step 1 start 
step 2 read the input from the user for employeeName, weeklyHours, bonusRate, and baseSalary.
step 3 calculate  bonusPayment = weeklyHours * bonusRate.
                  grossSalary = baseSalary + bonusPayment.
                  pension = grossSalary * pensionRate.
                  tax = grossSalary * taxRate.
                  netSalary = grossSalary - (pension + tax).
step 4 dsplay  employeeName,baseSalary,bonusPayment,grossSalary,total deductions (pension + tax),netSalary.
step 5 end 


                  

