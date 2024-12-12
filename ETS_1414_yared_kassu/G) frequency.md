PSEUDOCODE:


START

step 1. Input the number `number`.

step 2. Initialize an array `frequency` of size 10 with all elements as 0.

step 3. WHILE `number` is not 0:

   a. Extract the last digit: `digit = number % 10`.
   
   b. Increment the corresponding index in `frequency`: `frequency[digit]++`.
   
   c. Remove the last digit: `number = number / 10`.
   
step 4. Display "Digit\tFrequency".

step 5. FOR each digit from 0 to 9:

   a. IF `frequency[i]` is greater than 0:
   
      i. Display the digit and its frequency.

END
