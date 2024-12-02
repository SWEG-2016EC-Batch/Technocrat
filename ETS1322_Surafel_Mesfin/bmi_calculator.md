The program accepts weight( kgs) and height(m) and calculate BMI. 

Step1: start the program.
Step2: read weight and height of a person.
Step3: calculate body mass index as BMI=weight/(height*height).
Step4:print BMI
Step4: end the program.
Flowchart:



```mermaid
flowchart TD
    A[Start] --> B[Enter weight in kilograms]
    B --> C[Enter height in meters]
    C --> D[Calculate BMI as weight / (height * height)]
    D --> E{BMI Category}
    E -->|BMI < 18.5| F[Underweight]
    E -->|18.5 <= BMI < 25| G[Normal weight]
    E -->|BMI >= 25| H[Overweight]
    F --> I[Ask user to calculate for another person]
    G --> I
    H --> I
    I -->|Yes (1)| B
    I -->|No (0)| J[End]
    I -->|Invalid input| K[Display "Invalid input! Exiting the program."]
    K --> J
```