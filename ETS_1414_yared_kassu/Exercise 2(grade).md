PSEUDOCODE:

START

Step 1: Declare the following variables:

    - `test`, `quiz`, `project`, `assignment`, `finalExam` (to store input scores).
    
    - `total` (to store the total score).

Step 2: Prompt the user to enter the scores for each assessment:

    a. Display "Enter the Test score (out of 15):".
    
    b. Read the value into `test`.
    
    c. Display "Enter the Quiz score (out of 5):".
    
    d. Read the value into `quiz`.
    
    e. Display "Enter the Project score (out of 20):".
    
    f. Read the value into `project`.
    
    g. Display "Enter the Assignment score (out of 10):".
    
    h. Read the value into `assignment`.
    
    i. Display "Enter the Final Exam score (out of 50):".
    
    j. Read the value into `finalExam`.

Step 3: Calculate the total score:

    `total = test + quiz + project + assignment + finalExam`.

Step 4: Display the total score:

    - Print "Total Mark: " followed by the value of `total`.

Step 5: Determine the grade based on the total score:

    a. IF `total >= 90`:
    
         - Display "Grade: A+".
         
    b. ELSE IF `total >= 80`:
    
         - Display "Grade: A".
         
    c. ELSE IF `total >= 75`:
    
         - Display "Grade: B+".
         
    d. ELSE IF `total >= 60`:
    
         - Display "Grade: B".
         
    e. ELSE IF `total >= 55`:
    
         - Display "Grade: C+".
         
    f. ELSE IF `total >= 45`:
    
         - Display "Grade: C".
         
    g. ELSE IF `total >= 30`:
    
         - Display "Grade: D".
         
    h. ELSE:
    
         - Display "Grade: F".

Step 6: Terminate the program.

END
