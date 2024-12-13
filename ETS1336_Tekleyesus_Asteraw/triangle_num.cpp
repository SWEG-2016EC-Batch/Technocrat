#include<iostream>
using namespace std;
int main(){
    int num;
    cout<<"enter the dimension ";
    cin>>num;
    char alpha ='A';
    for(int i =1;i<=num;i++){
        for(int j=1;j<=i;j++){
            cout<<j;
        }
        cout<<endl;
 }
 return 0;
}
