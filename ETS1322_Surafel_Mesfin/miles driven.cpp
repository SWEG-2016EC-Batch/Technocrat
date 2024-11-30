#include <iostream>
using namespace std;
int main() {
    double tankCapacity, milesPergallon,distance;
    cout << "Enter the capacity of the fuel tank (in gallons):  ";
    cin >> tankCapacity;
    cout << "Enter the fuel efficiency of the automobile (in miles per gallon):  ";
    cin >>milesPergallon;
 distance = tankCapacity *milesPergallon;
    cout << "The automobile can be driven up to " << distance << " miles without refueling." << endl;

    return 0;
}