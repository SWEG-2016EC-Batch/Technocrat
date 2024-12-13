#include <iostream>
using namespace std;

int main() {
    int num, digit, count;
    cout << "Enter an integer: ";
    cin >> num;

    int temp = abs(num); 

    cout << "Digit\tFrequency\n";
    for (int i = 0; i <= 9; ++i) {
        temp = abs(num); 
        count = 0;
        while (temp > 0) {
            digit = temp % 10;
            if (digit == i) {
                count++;
            }
            temp /= 10;
        }
        cout << i << "\t" << count << endl;
    }

    return 0;
}