PSEUDOCODE:


START

Step 1: Assign the value of `number` to a temporary variable `temp`.  
        This ensures that the original value of `number` is not altered.

Step 2: Calculate the last digit of `temp` using `temp % 10`.  
        Store the result in a variable `lastDigit`.

Step 3: Start a WHILE loop that continues as long as `temp` is greater than or equal to 10:
   Step 3.1: Remove the last digit from `temp` by performing integer division (`temp / 10`).

Step 4: End the WHILE loop when `temp` becomes a single-digit number.  
        At this point, `temp` contains the first digit of the original `number`.  
        Store this value in a variable `firstDigit`.

Step 5: Display the message "First digit: " followed by the value of `firstDigit`,  
        and ", Last digit: " followed by the value of `lastDigit`.

Step 6: Calculate the sum of `firstDigit` and `lastDigit`.  
        Display the message "Sum of first and last digit: " followed by the calculated sum.

END
