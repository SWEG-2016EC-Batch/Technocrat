#include <iostream>
using namespace std;

int main() {
    // Declaration
    double days, hours, minutes, seconds;
    int file_size;
    int time;
    const int transmission_rate = 960; // Transmission rate in bytes per second

    // Input and validate file size
    while (true) {
        cout << "Input the file size in bytes: ";
        cin >> file_size;

        if (cin.fail() || file_size <= 0) { // Check for invalid input or non-positive file size
            cin.clear();             // Clear error flag
            cin.ignore(1000, '\n');  // Discard invalid input
            cout << "Invalid input! Please enter a positive integer for the file size." << endl;
        } else {
            break; // Valid input, exit the loop
        }
    }

    // Calculate time
    time = file_size / transmission_rate;
    days = time / 86400;       // Calculate days
    time = time % 86400;       // Remaining time after days
    hours = time / 3600;       // Calculate hours
    time = time % 3600;        // Remaining time after hours
    minutes = time / 60;       // Calculate minutes
    seconds = time % 60;       // Remaining time after minutes

    // Show result
    cout << "It takes " << days << " days " << hours << " hours " << minutes << " minutes " << seconds << " seconds." << endl;

    return 0;
}
