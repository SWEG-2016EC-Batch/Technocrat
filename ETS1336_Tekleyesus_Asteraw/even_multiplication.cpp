#include<iostream>
using namespace std;
int main(){
int count = 1;
int num;
cout<<"enter the number ";
cin>>num;
while(num >0){
   int rem = num % 10;
     if(rem % 2 == 0){
        count*=rem;
     }
  num/=10;
}
cout<<count;

    return 0;
}
