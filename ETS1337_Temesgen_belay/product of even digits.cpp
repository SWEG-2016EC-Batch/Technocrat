#include <iostream>
using namespace std;

int main() {
    int number, digit, product = 1;
    bool even exists = false;

    cout << "Enter a number: ";
    cin >> number;
     
       while (number > 0) {
        digit = number % 10; 
        if (digit % 2 == 0) {
            product *= digit;
            Even exists = true; 
        }
        number /= 10; 
    }

    if (Even exists) {
        cout << "The product of even digits is: " << product << endl;
    } else {
        cout << "No even digits found." << endl;
    }

    return 0;
}
