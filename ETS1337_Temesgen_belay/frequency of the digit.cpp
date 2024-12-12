#include <iostream>
using namespace std;

int main() {
    int number;
    int digitCount[10] = {0};  
    cout << "Enter a number: ";
    cin >> number;
        while (number != 0) {
        int digit = number % 10;  
        digitCount[digit]++;     
        number /= 10;            
    }
    cout << "Digit\tFrequency" << endl;
    for (int i = 0; i < 10; i++) {
        if (digitCount[i] > 0) {  
            cout << i << "\t" << digitCount[i] << endl;
        }
    }

    return 0;
}
