PSEUDOCODE:


START

Step 1: Assign the value of `number` to a temporary variable `temp`.

Step 2: Assign the value of `count` (representing the number of digits in `number`) to a variable `numDigits`.

Step 3: Declare and initialize an integer variable `divisor` to 1.  
        This variable will be used to extract the first digit.

Step 4: Start a FOR loop that iterates from `i = 1` to `i < numDigits`:
   Step 4.1: Multiply `divisor` by 10 in each iteration.
   Step 4.2: After the loop ends, `divisor` will be equal to 10 raised to the power of `(numDigits - 1)`.

Step 5: Calculate the first digit of `number`:
   Step 5.1: Divide `number` by `divisor` to isolate the first digit.  
             Store the result in a variable `firstDigit`.

Step 6: Calculate the last digit of `number`:
   Step 6.1: Take `number % 10` to get the last digit.  
             Store the result in a variable `lastDigit`.

Step 7: Calculate the middle part of the number:
   Step 7.1: Compute `(number % divisor)` to remove the first digit.
   Step 7.2: Divide this result by 10 to remove the last digit.  
             Store the result in a variable `middle`.

Step 8: Construct the swapped number:
   Step 8.1: Multiply `lastDigit` by `divisor`.
   Step 8.2: Multiply `middle` by 10.
   Step 8.3: Add `lastDigit * divisor`, `middle * 10`, and `firstDigit` to create the swapped number.  
             Store the result in a variable `swapped`.

Step 9: Display the message "Number after swapping first and last digits: "  
        followed by the value of `swapped`.

END
