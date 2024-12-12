#include<iostream>
using namespace std;
int main(){
int count = 0;
int num;
cout<<"enter the number ";
cin>>num;
while(num >0){
   int rem = num % 10;
     count++;
  num/=10;
}
cout<<count;
 return 0;
}
