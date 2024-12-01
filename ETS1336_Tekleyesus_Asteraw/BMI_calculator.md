 # PROBLEM ANALYSIS
 ##### we are going to compute the body mass index of different persons. It is necessary to have an input like weight, height.
 ##### So, we can calculate the body mass index of a person by using the formula weight divided by height squared.
 ## INPUT
     1.weight
     2.height
     3.choice for another person
 ## OUTPUT
     1.Body mass index of a person with respected weight catagory


 # PSEUDOCODE
   #### 1.start
   #### 2.read weight and height
   #### 3.compute Body mass index(BMI) as BMI = weight /(height * height)
   #### 4.if BMI < 18.5
                   print underweight
                   go to step 7
   #### 5.else if BMI >= 18.5 and < 24.9
                                        print normal weight
                                        goto step 7
   #### 6.else
                          print overweight
   #### 7.ask the user's choice if he wants to compute for another person
   #### 8.if choice == yes
                       go to step 2
   #### 9.else
                go to step 10
   #### 10.stop



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







































































