#include <iostream>
using namespace std;

int main() {
    for (int i = 0; i < 7; i++) { 
        for (int j = 0; j < 8; j++) { 
           
            if (i == 0 || i == 6 || j == 0 || j == 7) {
                cout << "* ";
            } else {
                cout << "  "; 
            }
        }
        cout << endl;
    }
    return 0;
}


// to allow user to input dimension 

#include <iostream>
using namespace std;
int main() {
    int rows, columns;
    cout << "Enter the number of rows: ";
    cin >> rows;
    cout << "Enter the number of columns: ";
    cin >> columns;
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < columns; j++) {
             if (i == 0 || i == rows - 1 || j == 0 || j == columns - 1) {
                cout << "* "; 
            } else {
                cout << "  ";  
            }
        }
        cout << endl;  
    }

    return 0;
}

