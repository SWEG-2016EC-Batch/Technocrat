#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int option, num, org, rev, cnt, prod, fst, lst, summ;
    int digits_count, swapped_num, temp_num, fact_sum, divisors_sum;
    int occurrences[10];

    do {
        cout << "Choose a functionality:\n1. Reverse the number\n2. Count digits\n3. Product of even digits\n4. First and last digit sum\n5. Swap first and last digit\n6. Check palindrome\n7. Digit frequency\n8. Check Strong number\n9. Check Perfect number\n0. Exit\nEnter your choice: ";
        cin >> option;

        if (option == 0) break;
        
        cout << "Enter an integer: ";
        cin >> num;
        org = num;
        rev = 0; cnt = 0; prod = 1; summ = 0;
        for (int i = 0; i < 10; i++) occurrences[i] = 0;

        switch(option) {
            case 1:
                while (num != 0) { lst = num % 10; rev = rev * 10 + lst; num /= 10; }
                cout << "Reverse: " << rev << endl;
                break;
            case 2:
                while (num != 0) { num /= 10; cnt++; }
                cout << "Number of digits: " << cnt << endl;
                break;
            case 3:
                while (num != 0) { lst = num % 10; if (lst % 2 == 0) prod *= lst; num /= 10; }
                cout << "Product of even digits: " << prod << endl;
                break;
            case 4:
                fst = org; while (fst >= 10) fst /= 10; lst = org % 10;
                cout << "Sum of first and last digit: " << fst + lst << endl;
                break;
            case 5:
                fst = org; while (fst >= 10) fst /= 10; lst = org % 10;
                digits_count = log10(org); swapped_num = lst * pow(10, digits_count) + (org % int(pow(10, digits_count))) / 10 * 10 + fst;
                cout << "After swapping: " << swapped_num << endl;
                break;
            case 6:
                temp_num = org; rev = 0;
                while (temp_num != 0) { lst = temp_num % 10; rev = rev * 10 + lst; temp_num /= 10; }
                cout << (rev == org ? "Palindrome" : "Not a palindrome") << endl;
                break;
            case 7:
                num = org;
                while (num != 0) { lst = num % 10; occurrences[lst]++; num /= 10; }
                for (int i = 0; i < 10; i++) if (occurrences[i] > 0) cout << i << ": " << occurrences[i] << endl;
                break;
            case 8:
                fact_sum = 0; num = org;
                while (num != 0) { int digit = num % 10; int fact = 1; for (int i = 1; i <= digit; i++) fact *= i; fact_sum += fact; num /= 10; }
                cout << (fact_sum == org ? "Strong number" : "Not a strong number") << endl;
                break;
            case 9:
                divisors_sum = 0;
                for (int i = 1; i < org; i++) if (org % i == 0) divisors_sum += i;
                cout << (divisors_sum == org ? "Perfect number" : "Not a perfect number") << endl;
                break;
            default:
                cout << "Invalid choice!" << endl;
        }
        cout << endl;
    } while (true);
    
    return 0;
}

