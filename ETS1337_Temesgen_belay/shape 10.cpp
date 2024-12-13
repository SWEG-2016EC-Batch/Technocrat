#include <iostream>
using namespace std;

int main() {
    int rows = 6; 
    for (int i = 1; i <= rows; i++) { 
        
        for (int j = 0; j < rows - i; j++) {
            cout << " ";
        }
       
        for (int j = 0; j < i; j++) {
            cout << "* ";
        }
        cout << endl; 
    }
    return 0;
}
