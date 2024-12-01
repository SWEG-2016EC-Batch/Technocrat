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







































































