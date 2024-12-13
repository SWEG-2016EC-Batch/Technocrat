
#include <iostream>
using namespace std;

int main() {
    char alphabet = 'A';
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 6; j++) {
            cout << (char)(alphabet + j) << " ";
        }
        alphabet += 6;
        cout << endl;
    }
    return 0;
}


// to allow user to input dimension 
#include <iostream>
using namespace std;

int main() {
    int rows, columns;
    char alphabet = 'A';
    cout << "Enter the number of rows: ";
    cin >> rows;
    cout << "Enter the number of columns: ";
    cin >> columns;
    for (int i = 0; i < rows; i++) {
    for (int j = 0; j < columns; j++) {
            cout << (char)(alphabet + j) << " ";
        }
        alphabet += columns;  
        cout << endl;  
    }

    return 0;
}

