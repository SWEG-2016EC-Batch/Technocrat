#include <iostream>
using namespace std;

int main() {
    // Transmission rate in characters per second
    const int transmissionRate = 960;
    // File size in bytes
    const long long fileSize = 419430400; // 400MB (419,430,400 bytes)

    // Calculate the total transmission time in seconds
    long long totalSeconds = fileSize / transmissionRate;

    // Convert total seconds into days, hours, minutes, and seconds
    int days = totalSeconds / (24 * 3600);
    totalSeconds %= (24 * 3600);
    int hours = totalSeconds / 3600;
    totalSeconds %= 3600;
    int minutes = totalSeconds / 60;
    int seconds = totalSeconds % 60;

    // Output the results
    cout << "The Time it takes to transmit a 400MB file is:" << endl;
    cout  << days <<"days ," << hours <<"hours ," << minutes <<"minutes ," << seconds <<"seconds<< endl;

    return 0;
}
