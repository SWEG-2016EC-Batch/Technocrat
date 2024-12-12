#include<iostream>
using namespace std;
int main(){
      double net_salary ,gross_salary,extra_worked_hours,bonus_rate,basic_salary,pension,tax,tax_rate,bonus,hours;
      cout<<"what is your basic salary? ";
      cin>>basic_salary;
      cout<<"enter the hours that you worked";
      cin>>hours;
      if(hours > 40){
        cout<<"enter the bonus rate";
        cin>>bonus_rate;
        int extra_worked_hours = hours - 40;
        bonus = extra_worked_hours * bonus_rate;
      }
      else{
        cout<<"there is no bonus available as there are no extra working hours"<<endl;
        bonus = 0;
      }
      gross_salary = basic_salary + bonus;
      pension = basic_salary * 0.7;
      if(basic_salary <= 200){
        tax_rate = 0;
      }
      else if(basic_salary > 200 && basic_salary <= 600){
        tax_rate = 0.1;
      }
      else if(basic_salary > 600 && basic_salary <= 1200){
        tax_rate = 0.15;
      }
      else if(basic_salary > 1200 && basic_salary <= 2000){
        tax_rate = 0.2;
      }
      else if(basic_salary > 2000 && basic_salary <= 3500){
        tax_rate = 0.25;
      }
      else{
        tax_rate = 0.3;
      }
      tax = basic_salary * tax_rate;
      net_salary = gross_salary - pension - tax;
      cout<<"your net salary is "<<net_salary;
        



















    return 0;
}
