 # pseudocode
            1.Start
            2.Declare an integer variable x to store the dimension of the shape.
            3.Input the value of x from the user.
            4.Loop from i = 0 to i < x:
                   a. Loop from j = 0 to j < (x - i - 1):
                      i. Print a space " " (to align the shape).
                   b. Loop from j = 0 to j < (2 * i + 1):
                     i. If j == 0 (first column of the row) OR j == 2 * i (last column of the row) OR i == x - 1 (last row):
            5.Print "*" (a star).
                     ii. Else:
                       Print " " (a space).
           5.stop
