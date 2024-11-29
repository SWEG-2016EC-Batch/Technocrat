# include <iostream>
using namespace std;
int main(){
 double base_salary;
 double working_hours;
 double bonus_rate;
 double bonus;
 double pension;
 double tax;
 double deductions;
 double salary;
 double net_salary;
 cout<<"enter your base salary\n";
 cin>>base_salary;
 cout<<"your base salary = "<<base_salary<<endl;
 cout<<"enter your working hours\n";
 cin>>working_hours;
 cout <<"your working hour is :"<< working_hours <<endl;
 bonus_rate = 0.37; 
 bonus = bonus_rate * working_hours;
 salary = base_salary + bonus; 
 pension = 0.05 * salary;
 tax = 0.15 * salary;
 deductions = pension + tax;
 net_salary = salary - deductions;
 cout<<"your net salary is :"<<net_salary<<endl;
 cout<<"here is how---> bonus_rate = 0.37.....bonus = bonus rate * working hours.....salary = base salary + bonus.....pension = 0.05 * salary.....tax = 0.15 * salary    deductions = pension + tax.....net salary = salary - deductions";
     
return 0;
 }
