#include <iostream>
using namespace std;

int main() {
    int num, first, last;
    cout << "Enter an integer: ";
    cin >> num;

    last = num % 10;
    while (num >= 10) {
        num /= 10;
    }
    first = num;

    cout << "First digit: " << first << endl;
    cout << "Last digit: " << last << endl;
    cout << "Sum of first and last digits: " << first + last << endl;

    return 0;
}