## Problem Description
This program calculates the final grade of a student based on various scores (test, quiz, project, assignment, and final exam). Each score has a specific weight (test: 15%, quiz: 5%, project: 20%, assignment: 10%, final exam: 50%). The program prompts the user to enter the scores for each category, calculates the total mark, and assigns a grade based on the total.

### Problem Analysis
- **Input**:
  - `test` (score for the test out of 100, float or double).
  - `quiz` (score for the quiz out of 100, float or double).
  - `project` (score for the project out of 100, float or double).
  - `assignment` (score for the assignment out of 100, float or double).
  - `finalExam` (score for the final exam out of 100, float or double).

- **Output**:
  - `totalMark` (float or double).
  - `grade` (character representing the grade, e.g., A+, A, B+, B, C+, C, D, F).

- **Process**:
  1. The user is prompted to enter the test score.
  2. The user is prompted to enter the quiz score.
  3. The user is prompted to enter the project score.
  4. The user is prompted to enter the assignment score.
  5. The user is prompted to enter the final exam score.
  6. Calculate the total mark using the formula:
     \[
     \text{totalMark} = (test \times 0.15) + (quiz \times 0.05) + (project \times 0.2) + (assignment \times 0.1) + (finalExam \times 0.5)
     \]
  7. Assign a grade based on the total mark:
     - `A+` for total mark >= 90
     - `A` for total mark >= 80
     - `B+` for total mark >= 75
     - `B` for total mark >= 60
     - `C+` for total mark >= 55
     - `C` for total mark >= 45
     - `D` for total mark >= 30
     - `F` for total mark < 30
  8. Display the total mark and the grade to the user.
  9. Stop.

### Pseudocode:
1. Start.
2. Declare variables: `test`, `quiz`, `project`, `assignment`, `finalExam`, `totalMark`, `grade`.
3. Prompt the user to enter the test score.
4. Prompt the user to enter the quiz score.
5. Prompt the user to enter the project score.
6. Prompt the user to enter the assignment score.
7. Prompt the user to enter the final exam score.
8. Calculate `totalMark` using the formula:
   \[
   \text{totalMark} = (test \times 0.15) + (quiz \times 0.05) + (project \times 0.2) + (assignment \times 0.1) + (finalExam \times 0.5)
   \]
9. Determine `grade` based on `totalMark`:
   - If `totalMark >= 90`, set `grade = 'A+'`.
   - Else if `totalMark >= 80`, set `grade = 'A'`.
   - Else if `totalMark >= 75`, set `grade = 'B+'`.
   - Else if `totalMark >= 60`, set `grade = 'B'`.
   - Else if `totalMark >= 55`, set `grade = 'C+'`.
   - Else if `totalMark >= 45`, set `grade = 'C'`.
   - Else if `totalMark >= 30`, set `grade = 'D'`.
   - Else, set `grade = 'F'`.
10. Output `totalMark` and `grade`.
11. Stop.

