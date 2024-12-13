#include <iostream>
using namespace std;

int main() {
    for (int i = 5; i >= 1; i--) {
        for (int j = i; j >= 1; j--) {
            cout << j << " ";
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
   for (int i = rows; i >= 1; i--) {
        for (int j = i; j >= 1; j--) {
            cout << j << " ";
        }
        cout << endl;  
    }

    return 0;
}

