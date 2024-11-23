// Write a program that find the result of the expression x^y where the value of X and Y are entered by the user.
#include <iostream>
#include<cmath>
using namespace std;
int main(){
 int x,y, result;
 cout<<"please, enter the base number "<<endl;
 cin>>x;
 cout<<"please, enter the exponent  "<<endl;
 cin>>y;
 result =pow(x,y);
 cout<<x<<" the power of "<<y<<" = "<<result<<endl;

    return 0;
}
/* or alternatively 
#include <iostream>
using namespace std;
int main(){
 int x,y, result=1;
 cout<<"please, enter the base number "<<endl;
 cin>>x;
 cout<<"please, enter the exponent  "<<endl;
 cin>>y;
for(int i=1; i<= y; i++){
    result*=x;
}
 cout<<x<<" the power of "<<y<<" = "<<result<<endl;

    return 0;
}  */
