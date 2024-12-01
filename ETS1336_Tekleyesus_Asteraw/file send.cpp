#include <iostream>
using namespace std;
int main() {
const int transmission_rate = 960;
long long int file_size;
cout<<"enter file size ";
cin>>file_size;
long long int time_in_seconds = file_size / transmission_rate;
cout << "The time that is elapsed to transmit "<<file_size<< " Bytes is "<<time_in_seconds << " seconds." << endl;
return 0;
}
