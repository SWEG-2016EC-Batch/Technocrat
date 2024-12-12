#include<iostream>
#include<iomanip>
using namespace std;
int main() {
    double num;
    int frequency[10] = {0};
    cout << "Enter a number: ";
    cin >> num;
    int tempNum = num;
    while (tempNum != 0) {
        int digit = tempNum % 10; 
        frequency[digit]++;        
        tempNum /= 10;             
    }
    cout << "\nDigit | Frequency\n";
    cout << "--------------------\n";
    for (int i = 0; i < 10; i++) {
        if (frequency[i] > 0) {
            cout << setw(5) << i << " | " << setw(9) << frequency[i] << endl;
        }
    }

    return 0;
}
