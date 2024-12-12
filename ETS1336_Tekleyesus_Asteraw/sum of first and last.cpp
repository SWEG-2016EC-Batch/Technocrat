#include<iostream>
using namespace std;
int main() {
    int num, firstDigit, lastDigit;
    cout << "Enter a number: ";
    cin >> num;
    lastDigit = num % 10;
    firstDigit = num;
    while (firstDigit >= 10) {
        firstDigit /= 10;
    }
    cout << "First digit: " << firstDigit << endl;
    cout << "Last digit: " << lastDigit << endl;
    cout << "Sum of first and last digit: " << firstDigit + lastDigit << endl;

    return 0;
}
