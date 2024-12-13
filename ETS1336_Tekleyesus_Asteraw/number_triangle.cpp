#include <iostream>
#include <iomanip> 
using namespace std;

int main() {
    int num;
    cout<<"enter the dimension ";
    cin>>num;
    for (int i = 1; i <= num; i++) {
        cout << setw((num - i) * 2 + 1);
        for (int j = i; j >= 1; j--) {
            cout << j << " ";
        }
        cout << endl;
    }

    return 0;
}
