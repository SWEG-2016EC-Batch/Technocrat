// Part (b): Count the number of digits
#include <iostream>
using namespace std;

int main() {
    int count = 0;
    temp = number;
    while (temp != 0) {
        temp /= 10;
        count++;
    }
    cout << "Number of digits: " << count << endl;
   return 0;
}
