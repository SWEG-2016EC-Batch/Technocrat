## Pseudocode

1. Start the program.
2. Read the integer num.
3. Calculate the number of digits in num using log10(num) + 1.
4. Extract the first digit by dividing num by 10^(numDigits - 1).
5. Extract the last digit using num % 10.
6. Compute the middle portion of num by removing the first and last digits.
7. Form the new number by concatenating the last digit, middle portion, and first digit.
8. Print the new number.
9. End the program.