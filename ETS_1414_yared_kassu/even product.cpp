// Part (c): Product of even digits
#include <iostream>
using namespace std;

int main() {
    int product = 1;
    temp = number;
    int hasEven = 0;
    while (temp != 0) {
        int digit = temp % 10;
        if (digit % 2 == 0) {
            product *= digit;
            hasEven = 1;
        }
        temp /= 10;
    }
    if (hasEven) {
        cout << "Product of even digits: " << product << endl;
    } else {
        cout << "No even digits found." << endl;
    }
  return 0;
}
