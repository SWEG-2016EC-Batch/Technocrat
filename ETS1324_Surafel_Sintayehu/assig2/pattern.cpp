#include <iostream>
using namespace std;

int main() {
    int dim = 5;

    // Pattern 1: Number Pattern (1 2 3 4 5 in rows)
    for (int row = 1; row <= dim; row++) {
        for (int col = 1; col <= dim; col++) {
            cout << col << " ";
        }
        cout << endl;
    }
    cout << endl;

    // Pattern 2: Alphabet Pattern (A B C D E F in rows, continue to X)
    char letter = 'A';
    for (int row = 1; row <= dim; row++) {
        for (int col = 1; col <= 6; col++) { // Prints from 'A' to 'F' in each row
            cout << letter++ << " ";
            if (letter > 'X') {
                letter = 'A'; // Reset to 'A' after reaching 'X'
            }
        }
        cout << endl;
    }
    cout << endl;

    // Pattern 3: Number Pyramid (1, 2 3, ...)
    for (int row = 1; row <= dim; row++) {
        for (int col = 1; col <= row; col++) {
            cout << col << " ";
        }
        cout << endl;
    }
    cout << endl;

    // Pattern 4: Reverse Number Pyramid with Spaces
    for (int row = 1; row <= dim; row++) {
        // Print spaces for alignment
        for (int col = 1; col <= dim - row; col++) {
            cout << "  ";
        }
        // Print numbers in reverse order
        for (int col = row; col >= 1; col--) {
            cout << col << " ";
        }
        cout << endl;
    }
    cout << endl;

    // Pattern 5: Character Triangle (A to E)
    for (int row = 1; row <= dim; row++) {
        for (int col = 1; col <= row; col++) {
            cout << (char)('A' + col - 1) << " ";
        }
        cout << endl;
    }
    cout << endl;

    // Pattern 6: Repeated Lowercase Letters (a b c d e)
    for (int row = 1; row <= dim; row++) {
        for (int col = 0; col < dim; col++) {
            cout << (char)('a' + col) << " ";
        }
        cout << endl;
    }
    cout << endl;

    // Pattern 7: Square Star Pattern
    for (int row = 1; row <= dim; row++) {
        for (int col = 1; col <= dim; col++) {
            if (row == 1 || row == dim || col == 1 || col == dim)
                cout << "* ";
            else
                cout << "  ";
        }
        cout << endl;
    }
    cout << endl;

    // Pattern 8: Inverted Half Pyramid
    for (int row = dim; row >= 1; row--) {
        for (int col = 1; col <= row; col++) {
            cout << "* ";
        }
        cout << endl;
    }
    cout << endl;

    // Pattern 9: Hollow Inverted Half Pyramid
    for (int row = dim; row >= 1; row--) {
        for (int col = 1; col <= row; col++) {
            if (col == 1 || col == row || row == dim)
                cout << "* ";
            else
                cout << "  ";
        }
        cout << endl;
    }
    cout << endl;

    // Pattern 10: Full Pyramid
    for (int row = 1; row <= dim; row++) {
        for (int col = 1; col <= dim - row; col++) {
            cout << "  ";
        }
        for (int col = 1; col <= 2 * row - 1; col++) {
            cout << "* ";
        }
        cout << endl;
    }
    cout << endl;

    // Pattern 11: Inverted Full Pyramid
    for (int row = dim; row >= 1; row--) {
        for (int col = 1; col <= dim - row; col++) {
            cout << "  ";
        }
        for (int col = 1; col <= 2 * row - 1; col++) {
            cout << "* ";
        }
        cout << endl;
    }
    cout << endl;

    // Pattern 12: Hollow Full Pyramid
    for (int row = 1; row <= dim; row++) {
        for (int col = 1; col <= dim - row; col++) {
            cout << "  ";
        }
        for (int col = 1; col <= 2 * row - 1; col++) {
            if (col == 1 || col == 2 * row - 1 || row == dim)
                cout << "* ";
            else
                cout << "  ";
        }
        cout << endl;
    }
    cout << endl;

    return 0;
}
