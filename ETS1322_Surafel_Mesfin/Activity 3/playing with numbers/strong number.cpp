#include <iostream>
using namespace std;
int main() {
    int num, sum = 0, digit;
    cout << "Enter a number: ";
    cin >> num;

    int temp = num;
    while (temp > 0) {
        digit = temp % 10;
      int fact = 1;
    for (int i = 1; i <= digit; i++) {
        fact *= i;
    }
        sum += fact;
        temp /= 10;
    }

    if (sum == num) {
        cout << num << " is a Strong Number. "<<endl;
    } else {
        cout << num << " is not a Strong Number. "<<endl;
    }

    return 0;
}