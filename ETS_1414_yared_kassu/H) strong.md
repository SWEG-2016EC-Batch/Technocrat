PSEUDOCODE:


START

step 1. Input the number `number`.

step 2. Initialize `temp` to `number` and `sum` to 0.

step 3. WHILE `temp` is not 0:

   a. Extract the last digit: `digit = temp % 10`.
   
   b. Calculate the factorial of the digit.
   
   c. Add the factorial to `sum`.
   
   d. Remove the last digit: `temp = temp / 10`.
   
step 4. IF `sum` is equal to `number`:

   a. Output "The number is a Strong number."
   
step 5. ELSE:

   a. Output "The number is not a Strong number."

END
