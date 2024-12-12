#include <iostream>
using namespace std;

int main() {
    int number, temp, reversed = 0;
    cout << "Enter a number: ";
    cin >> number;

    temp = number; // Store original number
    while (temp != 0) {
        reversed = reversed * 10 + temp % 10; // Reverse the digits
        temp /= 10;
    }

    if (number == reversed) {
        cout << number << " is a palindrome." << endl;
    } else {
        cout << number << " is not a palindrome." << endl;
    }
    return 0;
}
