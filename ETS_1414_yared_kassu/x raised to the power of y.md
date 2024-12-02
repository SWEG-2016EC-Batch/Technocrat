PROBLEM ANALYSIS:

INPUT:

the base number as x and an exponent y.

OUTPUT:

the value of x raised by  y.


PROCESS: 

compute the value of the result using the formula  x^
y



PSEUDOCODE:

Step 1: start 

Step 2:read the base (x) and the power (y)

Step 3:compute M<--x^
y

Step 4:print M

Step 5:Stop 

FLOWCHART:

```mermaid
flowchart TD
    start([Start]) --> inputX[/Enter value of x/]
    inputX --> validateX{Is x a valid number?}
    validateX -->|No| errorX[/Invalid input for x/] --> inputX
    validateX -->|Yes| inputY[/Enter value of y/]
    inputY --> validateY{Is y a valid number?}
    validateY -->|No| errorY[/Invalid input for y/] --> inputY
    validateY -->|Yes| calculateResult[Calculate x^y]
    calculateResult --> outputResult[/Show result/]
    outputResult --> finish([Finish])
