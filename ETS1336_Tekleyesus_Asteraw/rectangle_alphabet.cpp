#include<iostream>
using namespace std;
int main(){
    int num;
    cout<<"enter the dimension of the shapes ";
    cin>>num;
    char alpha ='A';
    for(int i =0;i<num;i++){
        for(int j=1;j<=num+2;j++){
            cout<<alpha;
            alpha++;
        }
        cout<<endl;
 }
 return 0;
}
