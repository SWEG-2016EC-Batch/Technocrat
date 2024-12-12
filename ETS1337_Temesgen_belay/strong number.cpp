#include <iostream>
using namespace std;
int main() {
    int num, originalNum, digit, factorial, sum = 0;
    cout << "Enter a number: ";
    cin >> num;
    originalNum = num;
    while (num > 0) {
        digit = num % 10;  
        factorial = 1;
    for (int i = 1; i <= digit; i++) {
            factorial *= i;
        }

        sum += factorial; 
        num /= 10;        
    }
    if (sum == originalNum) {
        cout << originalNum << " is a Strong Number." << endl;
    } else {
        cout << originalNum << " is not a Strong Number." << endl;
    }

    return 0;
}
