#include <iostream>
using namespace std;

int main() {
    int num, reversedNum = 0, originalNum, digit;
    cout << "Enter a number: ";
    cin >> num;

    originalNum = num;
    while (num > 0) {
        digit = num % 10;
        reversedNum = reversedNum * 10 + digit;
        num /= 10;
    }

    if (originalNum == reversedNum) {
        cout << originalNum << " is a Palindrome."<<endl;
    } else {
        cout <<originalNum << " is not a Palindrome."<<endl;
    }

    return 0;
}