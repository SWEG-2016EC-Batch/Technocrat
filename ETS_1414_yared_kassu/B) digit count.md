START

Step 1: Declare and initialize an integer variable `count` to 0.  
        This variable will keep track of the number of digits.

Step 2: Assign the value of `number` to a temporary variable `temp`.  
        This ensures that the original value of `number` is not altered.

Step 3: Start a WHILE loop that continues as long as `temp` is not equal to 0:
   Step 3.1: Divide `temp` by 10 to remove its last digit.  
             Update `temp` with the result of the division (`temp / 10`).
   Step 3.2: Increment `count` by 1.  
             This keeps track of how many digits have been processed.

Step 4: End the WHILE loop when `temp` becomes 0.

Step 5: Display the message "Number of digits: " followed by the value of `count`.

END
