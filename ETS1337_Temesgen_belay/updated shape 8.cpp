#include <iostream>
using namespace std;

int main() {
    for (int i = 6; i > 0; i--) { 
        for (int j = 0; j < i; j++) { 
            cout << "* ";
        }
        cout << endl; 
    }
    return 0;
}


// to allow user to input dimension 

#include <iostream>
using namespace std;
int main() {
    int rows;
    cout << "Enter the number of rows: ";
    cin >> rows;
    for (int i = rows; i > 0; i--) {
        for (int j = 0; j < i; j++) {
            cout << "* ";  
        }
        cout << endl;  
    }

    return 0;
}

