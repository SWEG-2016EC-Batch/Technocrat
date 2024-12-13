#include <iostream>
using namespace std;
int main() {
    int num;
    cout<<"enter the dimension for the shapes ";
    cin>>num;
for(int i= 0;i<num;i++){
    for(int j=0;j<=i;j++){
        cout<<" ";
    }
    for(int j=num;j>i;j--){
        cout<<"*"<<" ";
    }
    cout<<endl;
}
return 0;
}
