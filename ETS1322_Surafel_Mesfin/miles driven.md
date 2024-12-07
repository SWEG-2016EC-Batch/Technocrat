# Problem Analysis
The program calculates the maximum distance an automobile can travel without refueling based on the following:
## Inputs:
1. tankCapacity: The capacity of the fuel tank in gallons (user input).
2. milesPergallon: The fuel efficiency of the automobile in miles per gallon (user input).
## Process:
The maximum distance is calculated using the formula:
distance=tankCapacity×milesPergallon.
## Output:
The total distance the automobile can travel without refueling (distance).
# Pseudocode
1. Step1: start the program.
2. Step2: read fuel tank capacity and miles per gallon.
3. Step3: calculate maximum distance as distance=tank capacity*miles per gallon.
4. Step4: print distance.
5. Step4: end the program.
## Flowchart
mermaid
flowchart TD
    A[Start] --> B[Input: Fuel Tank Capacity (gallons)]
    B --> C[Input: Fuel Efficiency (miles per gallon)]
    C --> D[Calculate: distance = tankCapacity * milesPergallon]
    D --> E[Output: "The automobile can be driven up to distance miles without refueling"]
    E --> F[End]
