#include <iostream>
using namespace std;

int main() {
    int number, temp, reversedNumber = 0, digit;

    cout << "Enter a number: ";
    cin >> number;

    temp=number; 
    while (temp != 0) {
        digit = temp % 10;                 
        reversedNumber = reversedNumber * 10 + digit; 
        temp /= 10;                        
    }
     if (number == reversedNumber) {
        cout << "The number is a palindrome." << endl;
    } else {
        cout << "The number is not a palindrome." << endl;
    }

    return 0;
}
