#include <iostream>
using namespace std;

int main() {
    double test, quiz, project, assignment, finalExam, total;
    string grade; 
    cout << "Enter Test score out of 15 : ";
    cin >> test;
    cout << "Enter Quiz score out of 5 : ";
    cin >> quiz;
    cout << "Enter Project score out of 20 : ";
    cin >> project;
    cout << "Enter Assignment score out of 10 : ";
    cin >> assignment;
    cout << "Enter Final Exam score out of 50 : ";
    cin >> finalExam;

    total = test + quiz + project + assignment + finalExam;

    if (total >= 90) {
        grade = "A+";
    } else if (total >= 85) {
        grade = "A";
    } else if (total >= 75) {
        grade = "B+";
    } else if (total >= 60) {
        grade = "B";
    } else if (total >= 55) {
        grade = "C+";
    } else if (total >= 45) {
        grade = "C";
    } else if (total >= 30) {
        grade = "D";
    } else {
        grade = "F";
    }

    cout << "Total Marks: " << total << "\nGrade: " << grade << endl;
    return 0;
}