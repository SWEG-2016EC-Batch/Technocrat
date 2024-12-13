#include <iostream>
#include <iomanip> 
using namespace std;

int main() {
    for (int i = 1; i <= 5; i++) {
        cout << setw((5 - i) * 2 + 1);
        for (int j = i; j >= 1; j--) {
            cout << j << " ";
        }
        cout << endl;
    }

    return 0;
}
/*
         1
      2 1
    3 2 1
  4 3 2 1
5 4 3 2 1
*/