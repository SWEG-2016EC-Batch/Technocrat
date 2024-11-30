#include <iostream>
using namespace std;

int main() {
    const int transmission_rate = 960;
    const long long int file_size = 419430400;

    long long int time_in_seconds = file_size / transmission_rate;

    long long int days = time_in_seconds / (24 * 3600);
    time_in_seconds %= (24 * 3600);

    long long int hours = time_in_seconds / 3600;
    time_in_seconds %= 3600;

    long long int minutes = time_in_seconds / 60;
    long long int seconds = time_in_seconds % 60;

    cout << "The time required to transmit " << file_size << " bytes (" 
         << file_size / (1024 * 1024) << " MB) at " 
         << transmission_rate << " bytes per second is: " 
         << days << " days, " << hours << " hours, " 
         << minutes << " minutes, and " << seconds << " seconds." << endl;

    return 0;
}

