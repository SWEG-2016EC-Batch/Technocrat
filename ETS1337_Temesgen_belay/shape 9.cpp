#include <iostream>
using namespace std;

int main() {
    for (int i = 6; i > 0; i--) { 
        for (int j = 0; j < i; j++) {
            
            if (j == 0 || j == i - 1 || i == 6) {
                cout << "* ";
            } else {
                cout << "  "; 
            }
        }
        cout << endl; 
    }
    return 0;
}
