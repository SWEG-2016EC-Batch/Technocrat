#include<iostream>
using namespace std;
int main(){
    double test,quiz,project,assignment,final_exam,mark;
    cout<<"enter your test result";
    cin>>test;
    cout<<"enter your quiz result";
    cin>>quiz;
    cout<<"enter your project result";
    cin>>project;
    cout<<"enter your assignment result";
    cin>>assignment;
    cout<<"enter your final exam result";
    cin>>final_exam;
    mark = test + quiz + project + assignment + final_exam;
if(mark >= 90 && mark <= 100){
        cout<<"A+";
    }
else if(mark >= 80 && mark < 90){
        cout<<"A";
    }

else if(mark >= 75 && mark <80){
        cout<<"B+";
     }
else if(mark >=60 && mark < 75){
    cout<<"B";
}
else if(mark >= 55 && mark < 60){
    cout<<"C+";
}
else if(mark >= 45 && mark < 55){
    cout<<"C";
}
else if(mark >= 30 && mark < 45 ){
    cout<<"D";
}
else if(mark < 30){
    cout<<"F";
}

else{
    cout<<"invalid mark result";
}


    return 0;
}
