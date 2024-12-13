#include <iostream>
using namespace std;

int main() {
    int rows = 6; 

    for (int i = 1; i <= rows; i++) { 
        for (int j = 0; j < rows - i; j++) {
            cout << " ";
        }
         for (int j = 0; j < (2 * i - 1); j++) {
         if (j == 0 || j == (2 * i - 2) || i == rows) {
                cout << "* ";
            } else {
                cout << "  "; 
            }
        }
        cout << endl; 
    }
    return 0;
}
