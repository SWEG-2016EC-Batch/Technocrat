#include <iostream>
using namespace std;
int main(){
 float weight, height, BMI;
 int num;
 do {
 cout<<"Enter weight of a person in kilograms   "<<endl;
 cin>>weight;
 cout<<"Enter height of a person in meters   "<<endl;
 cin>>height;
 BMI= weight/(height*height);
 cout<<"Body mass index = "<<BMI<<endl;
 if(BMI<18.5){
     cout<<"Under weight! "<<endl;
 }
else if(BMI>=18.5 && BMI<25){
     cout<<"Normal weight!  "<<endl;
 }
else if(BMI>=25){
     cout<<"Over weight! "<<endl;
 }
cout<<"Do you want to calcualte BMI for another person?"<<endl;
cout<<"Enter 1 to continue or 0 to stop. "<<endl;
cin>>num;
if (cin.fail() || (num != 0 && num != 1)) {
 cout << "Invalid input! Exiting the program." << endl;
            return 1;
        }
}while (num==1);
    return 0;
}