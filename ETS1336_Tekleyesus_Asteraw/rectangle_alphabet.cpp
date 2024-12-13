#include<iostream>
using namespace std;
int main(){
    int x,y;
    cout<<"enter the dimension of length ";
    cin>>x;
    cout<<"enter the dimension the width ";
    cin>>y;
    char alpha ='A';
    for(int i =0;i<x;i++){
        for(int j=1;j<=y;j++){
            cout<<alpha;
            alpha++;
        }
        cout<<endl;
 }
 return 0;
}
