# Problem analysis
 #### input
        1.Employee's full name
        2.weekly working hour of an employee
        3.bonus rate per hour of an employee
        4.base salary of an employee
        5.pension rate = 5%
        6.tax rate = 15%
 #### output
        1.bonus payment of an employee
        2.gross salary of an employee
        3.net salary of an employee
 # Pseudocode
         1.start
         2.read employee's full name
         3.read weekly working hour 
         4.read bonus rate per hour
         5.read base salary
         6.read pension and tax rate
         7.compute gross salary as basa salary + (bonus rate * weekly working hour)
         8.compute tax deduction as tax rate * gross salary
         9.compute pension deduction as pension rate * gross salary
         10.compute total deduction as pension deduction + tax deduction
         11.compute net salary as gross salary - total deduction
         12.compute bonus payment as bonus rate * weekly hours
         13.print bonus payment
         14.print gross salary
         15.print net salary
         16.stop


 ```mermaid        
 flowchart TD
A([start])-->B[/read name/]
B-->C[/read working hour/]
C-->D[/read bonus rate/]
D-->E[/read base salary/]
E-->F(gross salary = base salary + bonus rate * working hour)
F-->G(pension rate = 0.05 and tax rate = 0.15)
G-->H(tax deduction = gross salary * tax rate)
H-->I(pension deduction = gross salary * pension rate)
I-->J(total deduction = tax deduction + pension deduction)
J-->K(net salary = gross salary - total deduction)
K-->L(bonus payment = bonus rate * weekly hour)
L-->M[/print bonus rate/]
M-->N[/print gross salary/]
N-->O[/print net salary/]
O-->P([stop])
