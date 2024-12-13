#include<iostream>
using namespace std;
int main(){
    int num;
    cout<<"enter the dimension ";
    cin>>num;
    for(int i =1;i<=num;i++){
        for(int k =i;k<num;k++){
          cout<<" ";
        }
           for(int j=i;j>0;j--){
            cout<<j;
        }
        
        cout<<endl;
 }
 return 0;
}
