#include <iostream>
using namespace std;

int main() {
    // Declare variables for each assessment
    float test, quiz, project, assignment, finalExam, total;

    // Input the scores for each assessment
    cout << "Enter the Test score (out of 15): ";
    cin >> test;
    cout << "Enter the Quiz score (out of 5): ";
    cin >> quiz;
    cout << "Enter the Project score (out of 20): ";
    cin >> project;
    cout << "Enter the Assignment score (out of 10): ";
    cin >> assignment;
    cout << "Enter the Final Exam score (out of 50): ";
    cin >> finalExam;

    // Calculate the total weighted score
    total = (test) + (quiz ) + (project ) + (assignment ) + (finalExam);

    // Determine the grade based on the total score
    cout << "Total Mark: " << total << endl;
    cout << "Grade: ";
    if (total >= 90)
        cout << "A+" << endl;
    else if (total >= 80)
        cout << "A" << endl;
    else if (total >= 75)
        cout << "B+" << endl;
    else if (total >= 60)
        cout << "B" << endl;
    else if (total >= 55)
        cout << "C+" << endl;
    else if (total >= 45)
        cout << "C" << endl;
    else if (total >= 30)
        cout << "D" << endl;
    else
        cout << "F" << endl;

    return 0;
}
