#include<iostream>
#include<cmath>
using namespace std;
int main(){
double x;
double y;
double result;
cout<<"enter the base number";
cin>>x;
cout<<"enter the exponent";
cin>>y;
result = pow(x , y);
cout<<x<< " the power of "<<y<< " is "<<result;
 return 0;
}
