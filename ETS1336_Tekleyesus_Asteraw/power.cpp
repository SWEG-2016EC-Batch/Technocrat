#include<iostream>
#include<cmath>
using namespace std;
int main(){
double number1;
double number2;
double result;
cout<<"enter the base number";
cin>>number1;
cout<<"enter the exponent";
cin>>number2;
result = pow(number1 , number2);
cout<<number1<< " the power of "<<number2<< " is "<<result;
 return 0;
}
