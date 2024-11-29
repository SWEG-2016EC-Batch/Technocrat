#include <iostream>

using namespace std;

int main()
{
  double gallons;
  double miles_per_gallons;
  double miles_left;
  
  cout << "Enter the gallons in the aoutomobile fuel tank: ";
  cin>>gallons;
  cout << "Enter the miles_per_gallons of the automobile: ";
  cin >> miles_per_gallons;

  miles_left = gallons * miles_per_gallons;

  cout << "Miles that are driven without refuelling is: " << miles_left<<" miles" <<  endl; 
  return 0;
}
