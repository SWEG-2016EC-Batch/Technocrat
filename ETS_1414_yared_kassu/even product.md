PSEUDOCODE:


START

Step 1: Declare and initialize an integer variable `product` to 1.  
        This variable will store the product of all even digits.

Step 2: Assign the value of `number` to a temporary variable `temp`.  
        This ensures that the original value of `number` is not altered.

Step 3: Declare and initialize an integer variable `hasEven` to 0.  
        This variable acts as a flag to check if there are any even digits.

Step 4: Start a WHILE loop that continues as long as `temp` is not equal to 0:
   Step 4.1: Extract the last digit of `temp` using `temp % 10`.  
             Store this digit in a variable `digit`.
   Step 4.2: Check if `digit` is even (i.e., `digit % 2 == 0`):
       a. If it is even:
          i. Multiply `product` by `digit` and update `product`.
         ii. Set `hasEven` to 1 to indicate that at least one even digit exists.
   Step 4.3: Remove the last digit from `temp` by performing integer division (`temp / 10`).

Step 5: End the WHILE loop when `temp` becomes 0.

Step 6: Check the value of `hasEven`:
   Step 6.1: If `hasEven` is 1:
       a. Display the message "Product of even digits: " followed by the value of `product`.
   Step 6.2: Otherwise:
       a. Display the message "No even digits found."

END
