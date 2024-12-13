## Problem Description
This program calculates the net salary of an employee based on the basic salary, worked hours, bonus rate, and overtime rate. It computes the gross salary, pension, income tax, and net salary.

### Problem Analysis
- **Input**:
  - `basicSalary` (double): The basic monthly salary of the employee.
  - `workedHours` (double): The number of hours worked in a month.
  - `bonusRate` (double): The rate for any additional bonuses.
  - `overtimeRate` (double, optional): The rate for overtime worked (if worked hours exceed 40).

- **Output**:
  - `grossSalary` (double): The total salary including basic salary and any bonuses.
  - `pension` (double): The pension amount (7% of basic salary).
  - `incomeTax` (double): The tax amount based on the gross salary.
  - `netSalary` (double): The final salary after deductions (pension + tax).

- **Process**:
  1. Start.
  2. Declare variables: `basicSalary`, `workedHours`, `bonusRate`, `overtimeRate`, `grossSalary`, `bonus`, `pension`, `incomeTax`, `netSalary`.
  3. Prompt the user to enter `basicSalary`.
  4. Prompt the user to enter `workedHours`.
  5. Prompt the user to enter `bonusRate`.
  6. If `workedHours > 40`:
     - Prompt the user to enter `overtimeRate`.
     - Calculate `bonus` as `(workedHours - 40) * overtimeRate`.
  7. Calculate `grossSalary` as `basicSalary + bonus`.
  8. Determine `taxRate` based on the `grossSalary`:
     - If `grossSalary > 3500`, set `taxRate = 0.3`.
     - Else if `grossSalary > 2000`, set `taxRate = 0.25`.
     - Else if `grossSalary > 1200`, set `taxRate = 0.2`.
     - Else if `grossSalary > 600`, set `taxRate = 0.15`.
     - Else, set `taxRate = 0.1`.
  9. Calculate `pension` as `basicSalary * 0.07`.
  10. Calculate `incomeTax` as `grossSalary * taxRate`.
  11. Calculate `netSalary` as `grossSalary - pension - incomeTax`.
  12. Display `grossSalary`, `pension`, `incomeTax`, and `netSalary` to the user.
  13. Stop.

