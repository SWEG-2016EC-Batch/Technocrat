#include <iostream>
using namespace std;

int factorial(int n) {
    int fact = 1;
    for (int i = 1; i <= n; ++i) {
        fact *= i;
    }
    return fact;
}

int main() {
    int num, sum = 0, digit;
    cout << "Enter a number: ";
    cin >> num;

    int temp = num;
    while (temp > 0) {
        digit = temp % 10;
        sum += factorial(digit);
        temp /= 10;
    }

    if (sum == num) {
        cout << num << " is a Strong Number.\n";
    } else {
        cout << num << " is not a Strong Number.\n";
    }

    return 0;
}