PSEUDOCODE:


START

Step 1: Declare variables

    - `name` (to store user's name).
    
    - `working_hours`, `bonus_rate`, `base_salary` (to store input values).
    
    - `bonus`, `gross_salary`, `pension`, `tax`, `deductions`, `net_salary` (to store calculated values).

Step 2: Input the user's name

    - Display "Enter your name:".
    
    - Read `name`.

Step 3: Input and validate `working_hours`

    - Repeat until valid:
    
        a. Display "Enter weekly working hours:".
        
        b. Read `working_hours`.
        
        c. If `working_hours` is invalid (negative or non-numeric):
        
            - Display "Invalid input! Please enter a non-negative number for working hours.".
            
        d. Otherwise, break the loop.

Step 4: Input and validate `bonus_rate`

    - Repeat until valid:
    
        a. Display "Enter bonus rate per hour:".
        
        b. Read `bonus_rate`.
        
        c. If `bonus_rate` is invalid (negative or non-numeric):
        
            - Display "Invalid input! Please enter a non-negative number for bonus rate.".
            
        d. Otherwise, break the loop.

Step 5: Input and validate `base_salary`

    - Repeat until valid:
    
        a. Display "Enter base salary:".
        
        b. Read `base_salary`.
        
        c. If `base_salary` is invalid (negative or non-numeric):
        
            - Display "Invalid input! Please enter a non-negative number for base salary.".
            
        d. Otherwise, break the loop.

Step 6: Calculate `bonus`

    - `bonus = working_hours * bonus_rate`.

Step 7: Calculate `gross_salary`

    - `gross_salary = base_salary + bonus`.

Step 8: Calculate `tax` based on `gross_salary`

    - If `gross_salary <= 200`, set `tax = 0`.
    - Else if `gross_salary <= 600`, set `tax = 0.10 * gross_salary`.
    - Else if `gross_salary <= 1200`, set `tax = 0.15 * gross_salary`.
    - Else if `gross_salary <= 2000`, set `tax = 0.20 * gross_salary`.
    - Else if `gross_salary <= 3500`, set `tax = 0.25 * gross_salary`.
    - Else, set `tax = 0.30 * gross_salary`.

Step 9: Calculate `pension`

    - `pension = 0.05 * gross_salary`.

Step 10: Calculate `deductions`

    - `deductions = pension + tax`.

Step 11: Calculate `net_salary`

    - `net_salary = gross_salary - deductions`.

Step 12: Display results

    a. Display "Hello, <name>!".
    b. Display "Bonus Payment: <bonus>".
    c. Display "Gross Salary: <gross_salary>".
    d. Display "Pension Deduction: <pension>".
    e. Display "Tax Deduction: <tax>".
    f. Display "Total Deductions: <deductions>".
    g. Display "Net Salary: <net_salary>".

END
