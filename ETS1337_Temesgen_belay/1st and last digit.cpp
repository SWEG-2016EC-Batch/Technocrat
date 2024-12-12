#include <iostream>
using namespace std;

int main() {
    int number, firstDigit, lastDigit, sum;

    cout << "Enter a number: ";
    cin >> number;
   lastDigit = number % 10; 

    firstDigit = number;
    while (firstDigit >= 10) { 
        firstDigit /= 10;
    }
    sum = firstDigit + lastDigit;
    cout << "The first digit is: " << firstDigit << endl;
    cout << "The last digit is: " << lastDigit << endl;
    cout << "The sum of the first and last digits is: " << sum << endl;

    return 0;
}
