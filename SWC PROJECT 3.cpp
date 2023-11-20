/* 
	Program purpose: to calculate the average scores for all
	students in the array scores.
	Programmer:MUHAMMAD RUZAINI BIN CHE DIN
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

	double calculateAverageScores(int numStudents, double scores[]) {
	    double averageScores;
	    double sum = 0.0;
	
	    for (int i = 0; i < numStudents; ++i) {
	        sum += scores[i];
	    }
	
	    averageScores = (numStudents > 0) ? (sum / numStudents) : 0.0;
	
	    return averageScores;
}
