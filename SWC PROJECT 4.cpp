/*
	Program purpose:to present all the student information,
	including student ID, student name, scores, attendance, and the calculated average scores.
	Programmer: MUHAMMAD IRFAN BIN MOHD LIZAN
	DATE 19 NOVEMBER 2023
*/


#include <iostream>
#include <math.h>
#include <iomanip> // For setw
#include <string>
using namespace std;

// Function prototypes
void inputStudentData(int numStudents, int studentID[], string studentName[], double scores[], int attendance[]);
double calculateAverageScores(int numStudents, double scores[]);

int studentID[50], attendance[50];
string studentName[50];
double scores[50], averageScores;
int numStudents = 10;

void displayStudentRecords(int numStudents, int studentID[], string studentName[], double scores[], int attendance[]) {
    cout << "Student Records" << endl;
    for (int i = 0; i < numStudents; ++i) {
        cout << setw(20) << "Student Name: " << studentName[i] << endl;
        cout << setw(20) << "Student ID: " << studentID[i] << endl;
        cout << setw(20) << "Score: " << scores[i] << endl;
        cout << setw(20) << "Attendance: " << attendance[i] << endl;
    }
}

