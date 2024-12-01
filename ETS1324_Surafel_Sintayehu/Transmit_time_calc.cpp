#include <iostream>
using namespace std;

int main() {
    // Constants
    const int transfer_rate = 960; // Characters per second
    const long long file_size = 419430400; // File size in bytes (400MB)

    // Calculate total time in seconds
    long long total_seconds = file_size / transfer_rate;

    // Convert time into days, hours, minutes, and seconds
    int days = total_seconds / 86400; // 1 day = 86400 seconds
    total_seconds %= 86400;

    int hours = total_seconds / 3600; // 1 hour = 3600 seconds
    total_seconds %= 3600;

    int minutes = total_seconds / 60; // 1 minute = 60 seconds
    int seconds = total_seconds % 60; // Remaining seconds

    // Output the result
    cout << "To transmit a file of size " << file_size << " bytes (" 
         << file_size / (1024 * 1024) << " MB) at " << transfer_rate 
         << " bytes per second, it will take:\n";
    cout << days << " days, " << hours << " hours, " 
         << minutes << " minutes, and " << seconds << " seconds.\n";

    return 0;
}
