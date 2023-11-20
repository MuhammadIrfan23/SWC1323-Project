/* 
	Program purpose: to collect user input for student ID, student name,
	scores, and attendance
	Programmer:MUHAMMAD IRFAN BIN MOHD LIZAN
	DATE:19 NOVEMBER 2023
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