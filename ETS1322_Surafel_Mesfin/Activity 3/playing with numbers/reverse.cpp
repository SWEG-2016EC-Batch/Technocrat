#include <iostream>
using namespace std;

int main() {
    int num, reversed = 0;
    cout << "Enter an integer: ";
    cin >> num;
    while (num != 0) {
        int digit = num % 10;
        reversed = reversed * 10 + digit; 
        num /= 10; 
    }

    cout << "Reversed Number: " << reversed << endl;
    return 0;
}
