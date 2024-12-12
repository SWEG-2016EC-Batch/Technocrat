#include <iostream>
using namespace std;

int main() {
    int number, firstDigit, lastDigit, temp, divisor = 1;

    cout << "Enter a number: ";
    cin >> number;
    temp = number;
    lastDigit = temp % 10;
    while (temp >= 10) {
        temp /= 10;
        divisor *= 10;
    }
    firstDigit = temp; 
    number = (number % divisor) / 10; 
    number = lastDigit * divisor + number * 10 + firstDigit; 
    cout << "The number after swapping first and last digits is: " << number << endl;

    return 0;
}
