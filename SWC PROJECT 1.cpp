/*
	Program purpose: Declare FOUR (4) arrays named studentID of type int, studentName of type string,
	scores of type double, and attendance of type int. Ensure that the arrays can store data
	for at least FIFTY (50) students.
	Programmer: MUHAMMAD RUZAINI BIN CHE DIN
	DATE 17 NOVEMBER 2023
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

int main() {
    cout << "Enter the number of students: ";
    cin >> numStudents;
    for(int i = 0; i < numStudents; i++) {
        inputStudentData(i, studentID, studentName, scores, attendance);
    }

    averageScores = calculateAverageScores(numStudents, scores);
    cout << "Your average score is: " << averageScores;

    return 0;
}
