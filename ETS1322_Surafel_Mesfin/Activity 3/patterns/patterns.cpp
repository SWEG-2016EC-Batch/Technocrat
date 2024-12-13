#include <iostream>
using namespace std;

int main() {
    int size;
    cout << "Enter the size of the patterns: ";
    cin >> size;

    cout << "Number Triangle:\n";
    for (int j = 1; j <= size; j++) {
        for (int i = 1; i <= j; i++) {
            cout << i << " ";
        }
        cout << endl;
    }

    cout << "\nNumber pattern :\n";
    for (int j = 1; j <= size; j++) {
        for (int i = 1; i <= size; i++) {
            cout << i << " ";
        }
        cout << endl;
    }

    cout << "\nAlphabet pattern :\n";
    char alphabet = 'A';
    for (int j = 1; j <= size; j++) {
        for (int i = 1; i <= size; i++) {
            cout << alphabet << " ";
            alphabet++;
            if (alphabet > 'Z') {
                alphabet = 'A';
            }
        }
        cout << endl;
    }

    return 0;
}
