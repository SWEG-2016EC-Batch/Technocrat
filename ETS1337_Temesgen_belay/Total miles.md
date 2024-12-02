/*Write a program that prompts the capacity in gallons of an automobile fuel tank and the miles per gallons
the automobiles can be driven. The program outputs the number miles the automobile cam be driven
without refueling.*/

The algorithm for the above problem
stage 1 problem analysis 
input 
Tank Capacity: The capacity of the fuel tank in gallons (must be positive).
Fuel Efficiency: The distance the automobile can travel on one gallon of fuel in miles per gallon (must be positive).
process
Check if the inputs are positive. 
If both inputs are valid, calculate the total miles by multiplying the tank capacity by the fuel efficiency.
output
f inputs are valid, display the total miles the automobile can travel without refueling.
If any input is invalid, display an appropriate error message and terminate the program.
stage 2  pseudocode
step 1 start
step 2 read the input 
step 3 After each input, check if the value is less than or equal to 0.
If invalid, print an error message and terminate the program.
step 4 If both inputs are valid, calculate the total miles as tankCapacity * milesPerGallon.
step 5 display the result 
step 6 end

flowchart TD
A([Start]) --> B[/Input fuel tank capacity in gallons/]
B --> C{Is tank capacity > 0?}
C -- No --> D[/Error: Tank capacity must be positive/]
D --> E([End])
C -- Yes --> F[/Input fuel efficiency in miles per gallon/]
F --> G{Is fuel efficiency > 0?}
G -- No --> H[/Error: Fuel efficiency must be positive/]
H --> E
G -- Yes --> I[Calculate total miles = tankCapacity * milesPerGallon]
I --> J[Display "The automobile can be driven totalMiles miles without refueling."]
J --> E
