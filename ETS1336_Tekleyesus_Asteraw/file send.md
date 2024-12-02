 # Problem Analysis
  #### we have been given that the transmission rate of a serial transmission line is 960 character per second  .
  #### we can get the time that is elapsed to transfer this file in the given transmission line by using the formula transmission line multiplied by file size.
   # Input
         transmission rate = 960
         file size
   # output
          time that is required to transfer that file
 # Pseudocode
         1.start
         2.read transmission rate and file size
         3.compute time elapsed as transmission rate * file size
         4.print time elapsed in second
         5.stop



 ```mermaid        
flowchart TD
A([start])-->B(transmission rate =960)
B-->C[/read file size/]
C-->D(time = transmission rate * file size)
D-->E[/print time/]
E-->F([stop])
