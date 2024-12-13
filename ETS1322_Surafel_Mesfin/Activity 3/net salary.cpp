#include<iostream>
#include<string>
using namespace std;
int main (  ){
 float worked_hours, tax, net_salary,pension, bonus_rate, taxrate ;
 double basic_salary, bonus=0 , gross_salary;
 const float pension_rate=0.07;

 cout<<"Please, Enter the basic salary in birr "<<endl;
 cin>>basic_salary;

 cout<<"Please, Enter worked hours   "<<endl;
 cin>>worked_hours;

  if(worked_hours>40){
  cout<<"Please, Enter over time bonus rate per hour  "<<endl;
  cin>>bonus_rate;
  bonus=bonus_rate*(worked_hours-40);
  }
   gross_salary=basic_salary+bonus;

   if(gross_salary>0 && gross_salary<200)
   {
     taxrate=0;
   }
 else if (gross_salary>=200 && gross_salary<600 ) 
 {
          taxrate= 0.1;
 }
 else if(gross_salary>= 600 && gross_salary <1200 )
 {
         taxrate = 0.15;
         }
 else if (gross_salary>=1200 &&  gross_salary <2000 )
 {
         taxrate = 0.2;
         }
 else if(gross_salary>=2000 && gross_salary<3500)
 {
         taxrate = 0.25;
         }
 else if(gross_salary>=3500)
 { 
 taxrate=0.30;
  }
 else{ 
 cout<<"invalid Salary! "; 
 return 1;
 }
 pension=basic_salary*pension_rate;

 tax=gross_salary*taxrate;

 net_salary=(gross_salary-pension-tax);

 cout<<"Your bonus is "<<bonus<<" birr"<<endl;

 cout<<"Your net salary is "<<net_salary<<" birr. ";
 return 0;
 }
