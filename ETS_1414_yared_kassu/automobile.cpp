#include<iostream>
using namespace std;

int main()
{
  //declaring variables:
 int tank_capacity, miles_per_gallon, no_of_miles;
 cout <<"input the tank capacity in gallon ";
// inputs
  cin>> tank_capacity;
 cout <<"input the miles per gallon an automobile goes";
 cin>>miles_per_gallon;
  //calculation
no_of_miles=(tank_capacity *miles_per_gallon);
 cout<< "the miles your automobile goes with out refueling is:  "<<no_of_miles;
 return 0;
}
