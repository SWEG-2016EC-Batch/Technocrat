#include <iostream>
using namespace std;

int main() {
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            cout << (char)('a' + j) << " ";
        }
        cout << endl;
    }
    return 0;
}


//to allow user to input dimension 

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
            cout << (char)('a' + j) << " "; 
        }
        cout << endl;  
    }

    return 0;
}

