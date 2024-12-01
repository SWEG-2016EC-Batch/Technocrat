#include<iostream>
using namespace std;
int main(){
    //daclaration
 double days,hours,minutes,seconds;
 //given the file size from the question
 int file_size=;
 int time;
 int transmission_rate=960;
 cout<< "input the file size";
 cin>>file_size;
 time=file_size/transmission_rate;
 days=time/86,400;
 time=time%86,400;
 hours=time/3600;
 time=time%3600;
 minutes=time/60;
 time=time%60;
 seconds=time;
 //showing the result
 cout<<"it takes "<<days<<"days "<<hours<<"hours "<<minutes<<"minutes "<<seconds<<"second ";
 return 0;
}
