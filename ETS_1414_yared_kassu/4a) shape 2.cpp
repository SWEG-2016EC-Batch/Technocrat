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