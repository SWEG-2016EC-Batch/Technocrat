#include<iostream>
#include<cmath>
using namespace std;
int main() {
    int num, firstDigit, lastDigit, digits, swappedNum;
    cout << "Enter a number: ";
    cin >> num;
    lastDigit = num % 10;
    digits = log10(num);
    firstDigit = num / pow(10, digits);
    num = num - firstDigit * pow(10, digits);
    num = num / 10;
    swappedNum = lastDigit * pow(10, digits);
    swappedNum += num * 10 + firstDigit;
    cout << "Number after swapping first and last digits: " << swappedNum << endl;

    return 0;
}
