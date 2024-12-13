#include <iostream>
using namespace std;

int main() {
    for (int i = 1; i <= 5; ++i) {
        for (char ch = 'a'; ch <= 'e'; ++ch) {
            cout << ch << " ";
        }
        cout << endl;
    }
    return 0;
}
/* 
a b c d e
a b c d e
a b c d e
a b c d e
a b c d e
*/