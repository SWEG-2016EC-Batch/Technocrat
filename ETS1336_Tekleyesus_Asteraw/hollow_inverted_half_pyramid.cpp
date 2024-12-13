#include <iostream>
using namespace std;
int main() {
    int x;
    cout << "Enter the dimension ";
    cin >> x;
    for (int i = 0; i < x; i++) {
        for (int j = 0; j < x - i; j++) {
            if (j == 0 || j == (x - i - 1) || i == 0) {
                cout << "*"; 
            } else {
                cout << " "; 
            }
        }
        cout << endl;
    }

    return 0;
}
