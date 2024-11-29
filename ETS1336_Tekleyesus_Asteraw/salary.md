problem analysis
    inputs
      1.employee's fullname
      2.employee.s weekly working hours
      3.employee's bonus rate per hour
      4.employee's base salary
      5.pension rate(5%)
      6.tax rate(15%)
    outputs
         1.employee's bonus payment
         2.employee's gross Salary
         3.employee's net Salary
      
      
  pseudocode
      1.start
      2.read employee's fullname ,employee's weekly working hour ,employee's bonus rate per hour ,employee's base salary
      3.compute gross salary as  grossSalary = baseSalary + (bonusRate * weeklyHours)
      4.calculate pension deduction as pension Deduction = gross Salary * pension rate
      5.calculate tax deduction as taxDeduction = gross Salary * tax rate
      6.calculate total deduction as total deduction = pension deduction + tax deduction
      7.calculate net Salary as net Salary = gross Salary - total deduction
      8.calculate the bonus payment as bonus payment = bonus rate * weekly working hours
      9.display the bonus payment
      10.display the gross Salary
      11.display the net Salary
      12.end


