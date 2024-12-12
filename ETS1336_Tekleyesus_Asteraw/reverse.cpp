#include<iostream>
#include<string>
using namespace std;
int main(){
int num;
int count = 0;
cout<<"enter the number";
cin>>num;
while(num > 0){
    int rem = num % 10;
    cout<<"the reverse order of the digit is "<<rem<<endl;
    count++;
    num/=10;
}

cout<<"number of the digits of the given number is "<<count;

    return 0;
}
