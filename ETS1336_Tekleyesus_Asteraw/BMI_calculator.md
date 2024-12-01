# PROBLEM ANALYSIS
## input 
   a.weight of a person
   b.height of a person
   c.choice

## output
 a.Body Mass Index with their respective weight catagory for multiple times

 

# PSEUDOCODE
 1.start
 2.read weight and height of a person
 3.computing Body Mass Index(BMI) as BMI = Weight/(height*height)
 4.if BMI < 18.5
               display underweight
               go to step 7
 5.else if BMI >=18.5 and < 24.9              
                              display normal weight
                              go to step 7
 6.else
          display overweight
          go to step 7
 7.ask the user for another BMI computing
 8.if choice == yes
               go to step 2
 9.else
     go to step 10
 10.stop

 
    
# FLOWCHART
---
flowchart TD
A([start])-->B[/read weight/]
B-->C[/read height/]
C-->D(B M I = weight / height * height)
D-->E{B M I < 18.5}
E--- |yes|F[/underweight/]
E--- |no|G{B M I >= 18.5 & B M I < 24.9}
G--- |yes|H[/normal weight/]
G--- |no|I[/overweight/]
F--->J{do you want to compute for another person?}
H--->J
I--->J
J---|yes|B
J---|no|K([stop])







































































