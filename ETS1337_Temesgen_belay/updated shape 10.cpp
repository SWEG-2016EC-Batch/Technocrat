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


//to allow user to input dimension 

#include <iostream>
using namespace std;
int main() {
    int rows;
    cout << "Enter the number of rows: ";
    cin >> rows;
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
