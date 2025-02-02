/*Make a program that calculates the Body Mass Index (BMI) of a person and determine weather the person is
in normal weight, under weight or over weight. BMI is calculated as (BMI = w/h*h). Make the program to
work for multiple person before terminated.*/

Algorithm for the above problem 
Stage 1 the problem analysis 
Input
1,Weight(in KG) for each person
2,Height(in M) for each person 
3,user's choice to continue or terminate the program 
Process
calculate BMI as Weight/height^2

Output
1,The calculated BMI for each person.
2,The corresponding BMI category:
Underweight: BMI < 18.5
Normal weight: 18.5 ≤ BMI < 24.9
Overweight: 25 ≤ BMI < 29.9
Obesity: BMI ≥ 30
3,A prompt asking if the user wants to calculate BMI for another person.
Stage 2 The Pseudocode
Step 1 start
step 2 read input as kilogram and height 
step 3 claculate the BMI 
step 4 classify the BMI under its category
step 5 print BMI and the category 
step 6 ask the user if he went to continue or not 
step 7 repeat the program if the user wents to continue 
step 8 if not end the program 

flowchart TD
A([Start]) --> B[/Input weight in kilograms/]
B --> C[/Input height in meters/]
C --> D[Calculate BMI = weight / (height * height)]
D --> E[Display BMI]
E --> F{BMI < 18.5?}
F -- Yes --> G[/You are underweight/]
F -- No --> H{BMI >= 18.5 & BMI < 24.9?}
H -- Yes --> I[/You are normal weight/]
H -- No --> J{BMI >= 25 & BMI < 29.9?}
J -- Yes --> K[/You are overweight/]
J -- No --> L[/You are obese/]
G --> M[Ask to calculate for another person]
I --> M
K --> M
L --> M
M --> N{Another person?}
N -- Yes --> B
N -- No --> O([End])

step 2 
