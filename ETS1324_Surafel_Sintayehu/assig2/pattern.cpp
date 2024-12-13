#include <iostream>
using namespace std;

int main() {
    int n = 5;

    // Pattern 1: Number Pattern (1 2 3 4 5 in rows)
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            cout << j << " ";
        }
        cout << endl;
    }
    cout << endl;

    // Pattern 2: Alphabet Pattern (A B C D E F in rows, continue to X)
    char ch = 'A';
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= 6; j++) { // Prints from 'A' to 'F' in each row
            cout << ch++ << " ";
            if (ch > 'X') {
                ch = 'A'; // Reset to 'A' after reaching 'X'
            }
        }
        cout << endl;
    }
    cout << endl;

    // Pattern 3: Number Pyramid (1, 2 3, ...)
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= i; j++) {
            cout << j << " ";
        }
        cout << endl;
    }
    cout << endl;

    // Pattern 4: Reverse Number Pyramid with Spaces
    for (int i = 1; i <= n; i++) {
        // Print spaces for alignment
        for (int j = 1; j <= n - i; j++) {
            cout << "  ";
        }
        // Print numbers in reverse order
        for (int j = i; j >= 1; j--) {
            cout << j << " ";
        }
        cout << endl;
    }
    cout << endl;

    // Pattern 5: Character Triangle (A to E)
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= i; j++) {
            cout << (char)('A' + j - 1) << " ";
        }
        cout << endl;
    }
    cout << endl;

    // Pattern 6: Repeated Lowercase Letters (a b c d e)
    for (int i = 1; i <= n; i++) {
        for (int j = 0; j < n; j++) {
            cout << (char)('a' + j) << " ";
        }
        cout << endl;
    }
    cout << endl;

    // Pattern 7: Square Star Pattern
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            if (i == 1 || i == n || j == 1 || j == n)
                cout << "* ";
            else
                cout << "  ";
        }
        cout << endl;
    }
    cout << endl;

    // Pattern 8: Inverted Half Pyramid
    for (int i = n; i >= 1; i--) {
        for (int j = 1; j <= i; j++) {
            cout << "* ";
        }
        cout << endl;
    }
    cout << endl;

    // Pattern 9: Hollow Inverted Half Pyramid
    for (int i = n; i >= 1; i--) {
        for (int j = 1; j <= i; j++) {
            if (j == 1 || j == i || i == n)
                cout << "* ";
            else
                cout << "  ";
        }
        cout << endl;
    }
    cout << endl;

    // Pattern 10: Full Pyramid
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n - i; j++) {
            cout << "  ";
        }
        for (int j = 1; j <= 2 * i - 1; j++) {
            cout << "* ";
        }
        cout << endl;
    }
    cout << endl;

    // Pattern 11: Inverted Full Pyramid
    for (int i = n; i >= 1; i--) {
        for (int j = 1; j <= n - i; j++) {
            cout << "  ";
        }
        for (int j = 1; j <= 2 * i - 1; j++) {
            cout << "* ";
        }
        cout << endl;
    }
    cout << endl;

    // Pattern 12: Hollow Full Pyramid
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n - i; j++) {
            cout << "  ";
        }
        for (int j = 1; j <= 2 * i - 1; j++) {
            if (j == 1 || j == 2 * i - 1 || i == n)
                cout << "* ";
            else
                cout << "  ";
        }
        cout << endl;
    }
    cout << endl;

    return 0;
}

