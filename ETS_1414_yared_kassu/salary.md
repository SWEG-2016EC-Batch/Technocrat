PROBLEM ANALYSIS:

INPUT:

name of employee,weekly 
 Working hours, bonus rate and base salary

OUTPUT:
print bonus, gross salary and net salary 

PROCESS:

compute bonus using the formula bonus rate*working hours 

 Gross salary using the formula 
 base salary+bonus


 Pension using the formula 0.05*base salary 


 Tax using the formula 0.15*base salary 
 Net salary using the formula gross salary-pension-tax


PSEUDOCODE:

Step 1: start 

Step 2:read name of an employee(string) ,weekly 
 Working hours, bonus rate and base salary 

Step 3:compute bonusbonus rate*working hours 
 Gross salarybase salary+bonus
 Pension0.05*base salary 
 Tax0.15*base salary 
 Net salarygross salary-pension-tax

Step 4:print bonus, gross salary and net salary 

Step 5:stop

FLOWCHART:
# C flowchart
 ```mermaid
graph TD
  A([START]) --> B[DECLARE variables]
  B --> C[REPEAT]
  C --> D[/"Enter the first name of employee"/]
  D --> E[/INPUT name/]
  E --> F[/"Enter the middle name of employee"/]
  F --> G[/INPUT name/]
  G --> H[/"Enter the last name of employee"/]
  H --> I[/INPUT name/]
  I --> J[/"Enter employee weekly working hours"/]
  J --> K[/INPUT weekly_working_hours/]
  K --> L{weekly_working_hours > 50?}
  L --> |Yes| M[/"Enter bonus rate per hour"/]
  M --> N[/INPUT bonus_rate_per_hour/]
  N --> O["Calculate bonus payment"]
  L --> |No| P["No bonus payment"]
  P --> Q[/"Enter employee weekly base salary"/]
  Q --> R[/INPUT base_salary/]
  R --> S["Calculate gross salary"]
  S --> T["Calculate tax"]
  T --> U["Calculate pension"]
  U --> V["Calculate net salary"]
  V --> W[/"Employee weekly bonus payment is shown"/]
  W --> X[/"Employee weekly gross salary is shown"/]
  X --> Y[/"Employee weekly net payment is shown"/]
  Y --> Z[/"If you continue with other employees, enter 'c'. Enter any other character to stop."/]
  Z --> AA[/INPUT ch/]
  AA --> AB{ch != 'c'?}
  AB --> |Yes| C
  AB --> |No| AC([END])
 
