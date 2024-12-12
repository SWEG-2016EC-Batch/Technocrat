#include <iostream>
using namespace std;

int factorial(int n) {
    int fact = 1;
    for (int i = 1; i <= n; i++) {
        fact *= i;
    }
    return fact;
}

int main() {
    int number, temp, sum = 0;
    cout << "Enter a number: ";
    cin >> number;

    temp = number;
    while (temp != 0) {
        int digit = temp % 10; // Extract last digit
        sum += factorial(digit); // Add factorial of the digit
        temp /= 10; // Remove the last digit
    }

    if (sum == number) {
        cout << number << " is a Strong number." << endl;
    } else {
        cout << number << " is not a Strong number." << endl;
    }
    return 0;
}
