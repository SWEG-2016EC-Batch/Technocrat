 # pseudocode
        1.start
        2.read choice
        3.if choice is 1 
              
            1.Start the program.
            2.Read the integer num.
            3.Initialize count to 0.
            4.Repeat until num becomes 0: 
                 4.1 Increment count by 1. 
                 4.2 Remove the last digit from num using num / 10.
            5.Print the value of count.
            6.End the program.

        4.if choice is 2
               1.start
               2.read number
               3.product = 1
               4.compute rem = num%10
               5.compute product*=rem
               6.update number by num/=10
               7.checks number>0
               8.if true
                      continue
               9.print product       
                10.stop      
                      
        5.if choice is 3
       1.start
       2.   DECLARE num, frequency[10] ← {0}
       3.read number(num)
       4. WHILE num ≠ 0 DO
       5. digit ← num MOD 10
       6.  frequency[digit] ← frequency[digit] + 1
       7. num ← num / 10
       8 FOR i FROM 0 TO 9 DO
       9 IF frequency[i] > 0 THEN
      10   PRINT i, frequency[i]
         
        6.if choice is 4
              1.start
              2. read number(num)
              3. while num != 0
              4. remainder = num % 10;
              5. reversedNum = reversedNum * 10 + remainder;
              6. num /= 10;
              7 . if originalNum == reversedNum
                       print num is palindrome
                   else 
                         print num isnot palindrome
             8.stop
               
        
        7.if choice is 5
     1.start   
      2. DECLARE num, sum ← 0
      3.read number(num)
      4. FOR i FROM 1 TO num / 2 DO
      5.IF num MOD i = 0 THEN
               sum ← sum + i
      7.IF sum = num THEN
             PRINT num, "is a perfect number."
           ELSE
            PRINT num, "is not a perfect number."

        8.if choice is 6
        1.start
        2.DECLARE num
        3.WHILE num > 0 DO
            rem ← num MOD 10
        4.PRINT rem as a reverse number of the original number
           num ← num / 10
       6.stop


        9.if choice is 7
      1.start
      2. DECLARE num, originalNum, sum ← 0
      3.read number(num)
      4. originalNum ← num
      5. WHILE num ≠ 0 DO
      6. digit ← num % 10
      7. sum ← sum + factorial(digit)
      8. num ← num / 10
      9. IF sum = originalNum THEN
           PRINT originalNum, "is a strong number."
       ELSE
            PRINT originalNum, "is not a strong number."
      10.stop

        10.if choice is 8
    1.start
    2.DECLARE num, firstDigit, lastDigit
    3. read number
    4. lastDigit ← num MOD 10
    5. firstDigit ← num
    6.WHILE firstDigit ≥ 10 DO
    7. firstDigit ← firstDigit DIV 10
    8  PRINT "First digit: ", firstDigit
    9.PRINT "Last digit: ", lastDigit
    10. PRINT  firstDigit + lastDigit
    11.stop
    
        11.if choice is 9
    1.start
    2.DECLARE num, firstDigit, lastDigit, digits, swappedNum
    3.read number(num)
    4.lastDigit ← num MOD 10
    5.digits ← log10(num)
    6.firstDigit ← num DIV 10^digits
    7.num ← num - (firstDigit * 10^digits)
    8.num ← num DIV 10
    9.swappedNum ← lastDigit * 10^digits
    10.swappedNum ← swappedNum + (num * 10) + firstDigit
    11.PRINT  swappedNum
    12.stop
         12.if choice is 0
                1.print exitting and exit the loop
    

        
