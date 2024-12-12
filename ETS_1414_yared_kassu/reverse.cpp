// Part (a): Reverse the number
#include <iostream>
using namespace std;

int main() {
    int number;
    cout << "Enter a number: ";
    cin >> number;

    int reversed = 0, temp = number;
    while (temp != 0) {
        reversed = reversed * 10 + temp % 10;
        temp /= 10;
    }
    cout << "Reversed Number: " << reversed << endl;
return 0;
}
