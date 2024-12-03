# Problem Analysis

1. **Input:**
   - Weight of a person in kilograms.
   - Height of a person in meters.

2. **Process:**
   - Calculating BMI using the formula ( \text{BMI} = \frac{\text{weight}}{(\text{height} \times \text{height})} ).

3. **Output:**
   - Body mass index (BMI).

---

# Algorithm

The program accepts weight (kgs) and height (m) and calculates BMI.

1. Step 1: Start the program.
2. Step 2: Read weight and height of a person.
3. Step 3: Calculate body mass index as ( \text{BMI} = \frac{\text{weight}}{(\text{height} \times \text{height})} ).
4. Step 4: Print BMI.
   - 4.1 If BMI is below 18.5, print "Under weight."
   - 4.2 If BMI is between 18.5 to 24.9, print "Normal weight."
   - 4.3 If BMI is greater than 25, print "Over weight."
5. Step 5: Ask the user if they want to continue (1 to continue, 0 to stop).
   - 5.1 If continue (1), repeat the above.
   - 5.2 If stop (0), break.
   - 5.3 Else, exit the program.
6. Step 6: End the program.

---

# Flowchart

graph TD;
    A[Start] --> B[Input weight in kg]
    A --> C[Input height in meters]
    B --> D[Calculate BMI]
    C --> D
    D --> E[Display BMI]
    E --> F{Is BMI < 18.5?}
    F -- Yes --> G[Display "Under weight!"]
    F -- No --> H{Is BMI < 25?}
    H -- Yes --> I[Display "Normal weight!"]
    H -- No --> J[Display "Over weight!"]
    G --> K[Ask if user wants to continue?]
    I --> K
    J --> K
    K --> L{Continue?}
    L -- Yes --> A
    L -- No --> M[End]

---

