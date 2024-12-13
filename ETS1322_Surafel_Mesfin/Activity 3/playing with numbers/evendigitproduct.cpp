#include <iostream>
using namespace std;

int main() {
    int num, product = 1, hasEven = 0;
    cout << "Enter an integer: ";
    cin >> num;

    while (num != 0) {
        int digit = num % 10; 
        if (digit % 2 == 0) { 
            product *= digit;
            hasEven = 1; 
        }
        num /= 10; 
    }

    if (hasEven) {
        cout << "Product of even digits: " << product << endl;
    } else {
        cout << "No even digits found." << endl;
    }

    return 0;
}