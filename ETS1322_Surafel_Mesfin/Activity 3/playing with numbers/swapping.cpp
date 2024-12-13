#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int num, first, last, numDigits, swapped;
    cout << "Enter an integer: ";
    cin >> num;

    last = num % 10; // Extract the last digit

    numDigits = log10(num) + 1;
    first = num / pow(10, numDigits - 1);
    int middle = (num % static_cast<int>(pow(10, numDigits - 1))) / 10;
    swapped = last * pow(10, numDigits - 1) + middle * 10 + first;

    cout << "Number after swapping first and last digits: " << swapped << endl;

    return 0;
}