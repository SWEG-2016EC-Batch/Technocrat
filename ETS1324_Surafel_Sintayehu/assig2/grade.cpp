#include <iostream>
using namespace std;

int main() {
    double exam1, quiz1, project1, task1, finalTest, totalScore;
    char letterGrade;

    cout << "Enter Exam 1 Score (out of 100): ";
    cin >> exam1;
    cout << "Enter Quiz 1 Score (out of 100): ";
    cin >> quiz1;
    cout << "Enter Project 1 Score (out of 100): ";
    cin >> project1;
    cout << "Enter Task 1 Score (out of 100): ";
    cin >> task1;
    cout << "Enter Final Test Score (out of 100): ";
    cin >> finalTest;

    totalScore = (exam1 * 0.15) + (quiz1 * 0.05) + (project1 * 0.2) + (task1 * 0.1) + (finalTest * 0.5);

    if (totalScore >= 90) letterGrade = 'A+';
    else if (totalScore >= 80) letterGrade = 'A';
    else if (totalScore >= 75) letterGrade = 'B+';
    else if (totalScore >= 60) letterGrade = 'B';
    else if (totalScore >= 55) letterGrade = 'C+';
    else if (totalScore >= 45) letterGrade = 'C';
    else if (totalScore >= 30) letterGrade = 'D';
    else letterGrade = 'F';

    cout << "Total Score: " << totalScore << endl;
    cout << "Grade: " << letterGrade << endl;

    return 0;
}

