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
