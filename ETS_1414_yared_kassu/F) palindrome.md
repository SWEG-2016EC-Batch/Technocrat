PSEUDOCODE:



START

step 1. Input the number `number`.

step 2. Initialize `temp` to `number` and `reversed` to 0.

step 3. WHILE `temp` is not 0:

   a. Extract the last digit: `temp % 10`.
   
   b. Append the digit to `reversed`: `reversed = reversed * 10 + last digit`.
   
   c. Remove the last digit: `temp = temp / 10`.
   
step 4. IF `number` is equal to `reversed`:

   a. Output "The number is a palindrome."
   
step 5. ELSE:

   a. Output "The number is not a palindrome."

END
