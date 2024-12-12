#include <iostream>
using namespace std;

int main() {
    int number, digit;
    int frequency[10] = {0}; // Initialize all frequencies to 0

    cout << "Enter a number: ";
    cin >> number;

    while (number != 0) {
        digit = number % 10; // Extract the last digit
        frequency[digit]++;  // Increment the frequency of the digit
        number /= 10;        // Remove the last digit
    }

    cout << "Digit\tFrequency" << endl;
    for (int i = 0; i < 10; i++) {
        if (frequency[i] > 0) {
            cout << i << "\t" << frequency[i] << endl;
        }
    }
    return 0;
}
