#include <iostream>
using namespace std;
int main() {
    const int transferRate = 960;
    const long long dataSize = 419430400;
    long long totalTime = dataSize / transferRate;
    int numDays = totalTime / (24 * 3600);
    totalTime %= (24 * 3600);
    int numHours = totalTime / 3600;
    totalTime %= 3600;
    int numMinutes = totalTime / 60;
    int numSeconds = totalTime % 60;
    
    cout << "The time required to transmit a 400MB file is:" << endl;
    cout << numDays << " days, " << numHours << " hours, "
         << numMinutes << " minutes, " << numSeconds << " seconds" << endl;

    return 0;
}