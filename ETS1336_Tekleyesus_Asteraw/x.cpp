#include<iostream>
using namespace std;
int main (){
float weight;
float height;
float BMI;
char another;
do{
cout<<"enter weight of a person ";
cin>>weight;
cout<<"enter height of a person ";
cin>>height;
BMI = weight/(height*height);
if(BMI < 18.5){
    cout<<"your Body Mass Index is "<<BMI<< " .So ,"<<"you are under weight"<<endl;
}
 else if(18.5 <= BMI && BMI < 24.9){
    cout<<"your Body Mass Index is "<<BMI<< " .So ,you are normal weight"<<endl;
   }
 else{
        cout<<"your Body Mass Index is "<<BMI<< " .So ,you are over weight"<<endl;
    }
cout<<"do you want to calculate for another person ,type ('y' or 'Y' for continuation )or ('n' or 'N' for termination)";
cin>>another;
}
while(another == 'Y'|| another == 'y');
 cout<<"Thank you for your patience";
return 0;
}

