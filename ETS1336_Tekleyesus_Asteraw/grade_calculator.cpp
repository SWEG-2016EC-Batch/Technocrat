#include<iostream>
using namespace std;
int main(){
    double test, quiz, project, assignment, final_exam, total;
    cout << "Enter test score: ";
    cin >> test;
    cout << "Enter quiz score: ";
    cin >> quiz;
    cout << "Enter project score: ";
    cin >> project;
    cout << "Enter assignment score: ";
    cin >> assignment;
    cout << "Enter final exam score: ";
    cin >> final_exam;

    total = test + quiz + project + assignment + final_exam;
    cout << "Grade: ";
    if (total >= 90) {
        cout << "A+\n";
    } else if (total >= 80 && total <90) {
        cout << "A\n";
    } else if (total >= 75 && total <80) {
        cout << "B+\n";
    } else if (total >= 60 && total <75) {
        cout << "B\n";
    } else if (total >= 55 && total <60) {
        cout << "C+\n";
    } else if (total >= 45 && total <55) {
        cout << "C\n";
    } else if (total >= 30 && total <45) {
        cout << "D\n";
    } else {
        cout << "F\n";
    }
    return 0;
}
