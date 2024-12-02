 # Problem analysis
 #### Input
        1.gallons of an automobile fuel tank
        2.the mailes per gallon an automobile is driven
 #### Output
        1.miles that are driven without refeulment
  
 # Pseudocode
        1.start
        2.read gallons of fuel in the automobile
        3.read the miles per gallon an automobile is driven
        4.compute miles driven without refeulment as gallons in the tank multiplied by miles per gallon
        5.print miles driven without refeulment 
        6.stop


```mermaid        
flowchart TD
A([start])-->B[/raed gallons/]
B-->C[/read miles per gallon/]
C-->D(miles driven = gallons * miles per gallon)
D-->E[/print miles driven/]
E-->F([stop])

