#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int count_digits();
int even_multiplication();
int frequency_digit();
int palindrome();
int perfect_num();
int reverse_number();
int strong_num();
int sum_of_first_last();
int swap_digits();
int main() {
    int choice;
    while (true) {
        cout << "1. Count digits\n";
        cout << "2. Even digits multiplication\n";
        cout << "3. Digit frequency computation\n";
        cout << "4. Palindrome check\n";
      cout << "5. Perfect number check\n";
     cout << "6. Reverse digits\n";
       cout << "7. Strong number check\n";
        cout << "8. Sum of the first and last digit\n";
       cout << "9. Swap the first and last digit\n";
       cout << "0. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                count_digits();
                break;
            case 2:
                even_multiplication();
                break;
            case 3:
                frequency_digit();
                break;
            case 4:
                palindrome();
                break;
            case 5:
              perfect_num();
                break;
            case 6:
               reverse_number();
                break;
            case 7:
              strong_num();
               break;
            case 8:
                sum_of_first_last();
                break;
           case 9:
               swap_digits();
                break;
            case 0:
                cout << "Exiting...\n";
                return 0;
            default:
                cout << "Invalid choice. Please try again.\n";
        }
    }
    return 0;
}

int count_digits() {
    int count = 0, num;
    cout << "Enter the number: ";
    cin >> num;
    while (num > 0) {
        num /= 10;
        count++;
    }
    cout << "Number of digits: " << count << endl;
    return count;
}

int even_multiplication() {
    int product = 1, num;
    bool has_even = false;
    cout << "Enter the number: ";
    cin >> num;
    while (num > 0) {
        int rem = num % 10;
        if (rem % 2 == 0) {
            product *= rem;
            has_even = true;
        }
        num /= 10;
    }
    if (has_even) {
        cout << "Product of even digits: " << product << endl;
    } else {
        cout << "No even digits found.\n";
    }
    return product;
}

int frequency_digit() {
    int num, frequency[10] = {0};
    cout << "Enter a number: ";
    cin >> num;
    while (num != 0) {
        int digit = num % 10;
        frequency[digit]++;
        num /= 10;
    }
    cout << "Digit | Frequency\n";
    cout << "-----------------\n";
    for (int i = 0; i < 10; i++) {
        if (frequency[i] > 0) {
            cout << setw(5) << i << " | " << setw(9) << frequency[i] << endl;
        }
    }
    return 0;
}





int palindrome() {
    int num, reversedNum = 0, originalNum, remainder;
    cout << "Enter a number: ";
    cin >> num;
    originalNum = num;

    while (num != 0) {
        remainder = num % 10;
        reversedNum = reversedNum * 10 + remainder;
        num /= 10;
    }

    if (originalNum == reversedNum) {
        cout << originalNum << " is a palindrome.\n";
    } else {
        cout << originalNum << " is not a palindrome.\n";
    }
     return 0;
}
int perfect_num() {
    int num;
    cout << "Enter a number: ";
    cin >> num;

    int sum = 0;
    for (int i = 1; i <= num / 2; ++i) {
        if (num % i == 0) {
            sum += i;
        }
    }

    if (sum == num) {
        cout << num << " is a perfect number." << endl;
    } else {
        cout << num << " is not a perfect number." << endl;
    }
    return 0;
}

int reverse_number() {
    int num;
    cout << "Enter the number: ";
    cin >> num;
    cout << "Reversed digits: ";

    while (num > 0) {
        int rem = num % 10;
        cout << rem;
        num /= 10;
    }
    cout << endl;
    return 0;
}

int strong_num() {
    auto factorial = [](int n) -> int {
        int fact = 1;
        for (int i = 1; i <= n; ++i) {
            fact *= i;
        }
        return fact;
    };

    int num, originalNum, sum = 0;
    cout << "Enter a number: ";
    cin >> num;

    originalNum = num;
    while (num != 0) {
        int digit = num % 10;
        sum += factorial(digit);
        num /= 10;
    }

    if (sum == originalNum) {
        cout << originalNum << " is a strong number." << endl;
    } else {
        cout << originalNum << " is not a strong number." << endl;
    }
    return 0;
}


int sum_of_first_last() {
    int num, firstDigit, lastDigit;
    cout << "Enter a number: ";
    cin >> num;

    lastDigit = num % 10;
    firstDigit = num;
    while (firstDigit >= 10) {
        firstDigit /= 10;
    }

    cout << "First digit: " << firstDigit << endl;
    cout << "Last digit: " << lastDigit << endl;
    cout << "Sum of first and last digit: " << firstDigit + lastDigit << endl;
    return 0;
}

int swap_digits() {
    int num, firstDigit, lastDigit, digits, swappedNum;
    cout << "Enter a number: ";
    cin >> num;

    lastDigit = num % 10;
    digits = log10(num);
    firstDigit = num / pow(10, digits);

    num = num - firstDigit * pow(10, digits);
    num = num / 10;
    swappedNum = lastDigit * pow(10, digits);
    swappedNum += num * 10 + firstDigit;

    cout << "Number after swapping first and last digits: " << swappedNum << endl;
    return 0;
}
