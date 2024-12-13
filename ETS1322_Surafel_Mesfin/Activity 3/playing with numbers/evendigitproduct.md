## Pseudocode

1. Start the program.
2. Read the integer num.
3. Initialize product to 1 and hasEven to 0.
4. Repeat until num becomes 0:
4.1 Extract the last digit of num using num % 10.
4.2 If the digit is even:
4.2.1 Multiply product by the digit.
4.2.2 Set hasEven to 1.
4.3 Remove the last digit from num using num / 10.
5. If hasEven is 1, print the value of product.
6. Otherwise, print "No even digits found".
7. End the program.