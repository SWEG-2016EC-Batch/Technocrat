#include <iostream>
using namespace std;

int main() {
    int x;
    cout << "Enter the dimension ";
    cin >> x;

    for (int i = 0; i < x; i++) {
        for (int j = x; j >i; j--) {
            cout << "*";
            
        }
        cout << endl;
    }

    return 0;
}
