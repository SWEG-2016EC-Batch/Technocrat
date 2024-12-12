START

Step 1: Declare an integer variable `number`.

Step 2: Display the message "Enter a number:".

Step 3: Take input from the user and store it in `number`.

Step 4: Declare and initialize an integer variable `reversed` to 0.  
        This variable will store the reversed number.

Step 5: Declare and initialize an integer variable `temp` with the value of `number`.  
        This variable is used to manipulate the number without altering the original value.

Step 6: Start a WHILE loop that continues as long as `temp` is not equal to 0:
   Step 6.1: Find the last digit of `temp` using the operation `temp % 10`.
   Step 6.2: Multiply `reversed` by 10 and add the last digit to it.  
             Update `reversed` with this new value.
   Step 6.3: Remove the last digit from `temp` by performing integer division (`temp / 10`).

Step 7: End the WHILE loop when `temp` becomes 0.

Step 8: Display the message "Reversed Number: " followed by the value of `reversed`.

END
