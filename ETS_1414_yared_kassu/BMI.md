PROBLEM ANALYSIS:
The program calculates the Body Mass Index (BMI) for a person and determines whether they are underweight, normal weight, or overweight. The program should handle multiple calculations until the user decides to exit.
Input

Weight of the person in kilograms (float or double).
Height of the person in meters (float or double).
User choice to continue or exit (character input).
Process

Take the weight and height as input.
Calculate BMI as BMI = weight / (height * height)
​
 
Categorize the BMI into one of three groups:
Underweight: BMI < 18.5
Normal weight: 18.5 ≤ BMI < 24.9
Overweight: BMI ≥ 25
Display the BMI value and the category.
Prompt the user if they want to calculate BMI for another person.
Repeat until the user chooses to exit.
Output

BMI value rounded to 2 decimal places.
Weight category: Underweight, Normal weight, or Overweight.


ALGORITHM USING PSEUDOCODE:

Start Program

Repeat:
    Display "Enter weight in kilograms:"
    Input weight
    Display "Enter height in meters:"
    Input height
    If weight <= 0 OR height <= 0 Then:
        Display "Invalid input! Weight and height must be positive."
        Continue to the next iteration
    Calculate BMI = weight / (height * height)
    If BMI < 18.5 Then:
        Set category = "Underweight"
    Else If BMI >= 18.5 AND BMI < 24.9 Then:
        Set category = "Normal weight"
    Else:
        Set category = "Overweight"
    Display "Your BMI is", BMI, "which is considered", category
    Display "Do you want to calculate BMI for another person? (y/n):"
    Input choice
Until choice is not 'y' OR 'Y'

Display "Goodbye!"

End Program

