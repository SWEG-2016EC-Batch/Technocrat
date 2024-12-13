## Problem Description

This program provides a menu-driven functionality for performing various operations on a given integer `n`. The operations include reversing the number, counting digits, calculating the product of even digits, checking if the number is a palindrome, and more. The user selects the desired functionality, and the program performs the operation accordingly.

### Problem Analysis
- **Input**:
  - `n` (integer): The number on which various operations will be performed.
  - `choice` (integer): The option selected by the user to perform specific operations.

- **Output**:
  - Prints the result of the selected operation.

### Pseudocode:

1. **Start**.

2. **Display Menu**: 
   - Prompt the user to choose from the following options:
     1. Reverse the number
     2. Count digits
     3. Product of even digits
     4. First and last digit sum
     5. Swap first and last digit
     6. Check palindrome
     7. Digit frequency
     8. Check Strong number
     9. Check Perfect number
     0. Exit

3. **User Input**: 
   - Get the user's choice and the integer `n`.

4. **Process Based on Choice**:
   - **Case 1: Reverse the number**
     - Initialize `reverse = 0`.
     - While `n` is not zero, extract the last digit and append it to `reverse`.
     - Output the reversed number.
   
   - **Case 2: Count digits**
     - Initialize `count = 0`.
     - While `n` is not zero, divide `n` by 10 and increment `count`.
     - Output the total digit count.
   
   - **Case 3: Product of even digits**
     - Initialize `product = 1`.
     - While `n` is not zero, extract the last digit. If the digit is even, multiply it to `product`.
     - Output the product of even digits.
   
   - **Case 4: First and last digit sum**
     - Extract the first and last digits.
     - Output the sum of the first and last digits.

   - **Case 5: Swap first and last digits**
     - Extract the first and last digits and swap them.
     - Reconstruct the number after swapping the first and last digits.
     - Output the swapped number.

   - **Case 6: Check palindrome**
     - Reverse the number and check if it matches the original number.
     - Output "Palindrome" or "Not a palindrome".
   
   - **Case 7: Digit frequency**
     - Initialize a frequency array `freq[10] = {0}`.
     - For each digit in the number, increment the corresponding index in the frequency array.
     - Output the frequency of each digit.
   
   - **Case 8: Check Strong number**
     - For each digit in the number, calculate the factorial and sum these factorials.
     - If the sum of factorials equals the original number, it is a strong number.
     - Output "Strong number" or "Not a strong number".
   
   - **Case 9: Check Perfect number**
     - Calculate the sum of divisors of the number.
     - If the sum equals the original number, it is a perfect number.
     - Output "Perfect number" or "Not a perfect number".

   - **Default Case**: Output "Invalid choice!" if the user enters an invalid choice.

5. **Repeat or Exit**: 
   - If the user chooses "0", exit the program. Otherwise, repeat the menu.

6. **End**.

