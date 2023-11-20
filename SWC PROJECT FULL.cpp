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

void inputStudentData(int i, int studentID[], string studentName[], double scores[], int attendance[]) {
    cout << "Please input student ID" << endl;
    cin >> studentID[i];
    cout << "Please input student name" << endl;
    cin.ignore();
    getline(cin, studentName[i]);
    cout << "Please enter student scores" << endl;
    cin >> scores[i];
    cout << "Please enter student attendance" << endl;
    cin >> attendance[i];
}

	double calculateAverageScores(int numStudents, double scores[]) {
	    double averageScores;
	    double sum = 0.0;
	
	    for (int i = 0; i < numStudents; ++i) {
	        sum += scores[i];
	    }
	
	    averageScores = (numStudents > 0) ? (sum / numStudents) : 0.0;
	
	    return averageScores;
}

void displayStudentRecords(int numStudents, int studentID[], string studentName[], double scores[], int attendance[]) {
    cout << "Student Records" << endl;
    for (int i = 0; i < numStudents; ++i) {
        cout << setw(20) << "Student Name: " << studentName[i] << endl;
        cout << setw(20) << "Student ID: " << studentID[i] << endl;
        cout << setw(20) << "Score: " << scores[i] << endl;
        cout << setw(20) << "Attendance: " << attendance[i] << endl;
    }
}
 