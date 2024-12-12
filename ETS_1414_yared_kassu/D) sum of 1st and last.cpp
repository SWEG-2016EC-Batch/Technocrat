 // Part (d): Sum of first and last digits
#include <iostream>
using namespace std;

int main() {
    temp = number;
    int lastDigit = temp % 10;
    while (temp >= 10) {
        temp /= 10;
    }
    int firstDigit = temp;
    cout << "First digit: " << firstDigit << ", Last digit: " << lastDigit << endl;
    cout << "Sum of first and last digit: " << firstDigit + lastDigit << endl;
return 0;
}

