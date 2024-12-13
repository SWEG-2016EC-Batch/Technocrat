#include <iostream>
using namespace std;

int main() {
    double test, quiz, project, assignment, finalExam, totalMark;
    char grade;

    cout << "Enter Test Score (out of 100): ";
    cin >> test;
    cout << "Enter Quiz Score (out of 100): ";
    cin >> quiz;
    cout << "Enter Project Score (out of 100): ";
    cin >> project;
    cout << "Enter Assignment Score (out of 100): ";
    cin >> assignment;
    cout << "Enter Final Exam Score (out of 100): ";
    cin >> finalExam;

    totalMark = (test * 0.15) + (quiz * 0.05) + (project * 0.2) + (assignment * 0.1) + (finalExam * 0.5);

    if (totalMark >= 85) grade = 'A+';
    else if (totalMark >= 70) grade = 'A';
    else if (totalMark >= 60) grade = 'B+';
    else if (totalMark >= 50) grade = 'B';
    else if (totalMark >= 45) grade = 'C+';
    else if (totalMark >= 40) grade = 'C';
    else if (totalMark >= 30) grade = 'D';
    else grade = 'F';

    cout << "Total Mark: " << totalMark << endl;
    cout << "Grade: " << grade << endl;

    return 0;
}

