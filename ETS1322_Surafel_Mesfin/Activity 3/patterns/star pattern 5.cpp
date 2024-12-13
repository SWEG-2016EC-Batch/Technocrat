#include <iostream>
using namespace std;

int main() {
    int height = 6;

    for (int i = 0; i < height; i++) {
        for (int j = 0; j < height - i; j++) {
            if (i == 0 || j == 0 || j == (height - i - 1)) {
                cout << "*";
            } else {
                cout << " ";
            }
        }
        cout << endl;
    }

    for (int i = 0; i < height; i++) {
        for (int j = 0; j < height - i; j++) {
            cout << "*";
        }
        cout << endl;
    }

    return 0;
}
