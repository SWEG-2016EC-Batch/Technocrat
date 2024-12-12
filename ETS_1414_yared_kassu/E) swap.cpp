// Part (e): Swap first and last digits
#include <iostream>
using namespace std;

int main() {
    temp = number;
    int numDigits = count;
    int divisor = 1;
    for (int i = 1; i < numDigits; i++) {
        divisor *= 10;
    }
    firstDigit = number / divisor;
    lastDigit = number % 10;
    int middle = (number % divisor) / 10;
    int swapped = lastDigit * divisor + middle * 10 + firstDigit;
    cout << "Number after swapping first and last digits: " << swapped << endl;

    return 0;
}
