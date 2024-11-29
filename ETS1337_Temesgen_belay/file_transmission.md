/*A serial transmission line can transmit 960 characters a second. Write a program that will calculate how long
it will take to send a file, given the file size. Test your program on a 400MB (419,430,400 byte) file which may
take days.*/

the algorithm for the above code 
stage 1 problem analysis 
input 
Transmission rate: 960 characters per second.
File size: Provided as 400 MB (419,430,400 bytes).
process 
Calculate the total time in seconds required for transmission.
Transmission time (in seconds) = Total characters / Transmission rate.
Convert the total time (in seconds) into days, hours, minutes, and seconds:
output 
Transmission time displayed in days, hours, minutes, and seconds.

stage 2 Pseudocode 
step 1 start 
step 2 calculate the total time by using the initialized file size and transmission rate
step 4 display the total time in days, hours, minutes, and seconds.
step 5 end 
