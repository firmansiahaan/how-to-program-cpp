// Fig. 4.10: ClassAverage.cpp
// Solving the class-average problem using sentinel-controlled iteration.
#include <iostream>
#include <iomanip>
using namespace std;

int main() {
	// initialization phase
	int total{ 0 };	// initialize sum of grades entered by the user
	unsigned int gradeCounter{ 0 };	// initialize # of grades entered so far

	// processing phase
	// prompt for input and read grade from user
	cout << "Enter grade or -1 to quit: ";
	int grade;
	cin >> grade;

	// loop until sentinel value read from user
	while (grade != -1) {
		total = total + grade;	// add grade to total
		gradeCounter = gradeCounter + 1;

		// prompt for input and read next grade from user
		cout << "Enter grade or -1 to quit: ";
		cin >> grade;
	}

	// termination phase
	// if user entered at least one grade...
	if (gradeCounter != 0) {
		// use number with decimal point to calculate average of grades
		double average{static_cast<double>(total) / gradeCounter };

		// display total and average of grades
		cout << "\nTotal of the << gradeCounter << grades entered is " << total;
		cout << setprecision(2) << fixed;
		cout << "\nClass average is " << average << endl;
	}
	else {
		cout << "No grades were entered" << endl;
	}

}