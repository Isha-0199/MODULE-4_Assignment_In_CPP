//Grade Calculator
//o Write a C++ program that takes a student's marks as input and calculates the grade
//based on if-else conditions.
//o Objective: Practice conditional statements (if-else).

#include <iostream>
using namespace std;

int main() {
    int marks;

    // user input 
    cout << "Enter your marks (0 - 100): ";
    cin >> marks;

    // condistional statement 
    if (marks >= 90 && marks <= 100)
	{
        cout << "Grade: A+" << endl;
    }
    else if (marks >= 80 && marks < 90)
	{
        cout << "Grade: A" << endl;
    }
    else if (marks >= 70 && marks < 80)
	{
        cout << "Grade: B" << endl;
    }
    else if (marks >= 60 && marks < 70)
	{
        cout << "Grade: C" << endl;
    }
    else if (marks >= 50 && marks < 60)
	{
        cout << "Grade: D" << endl;
    }
    else if (marks >= 0 && marks < 50)
	{
        cout << "Grade: F (Fail)" << endl;
    }
    else
	{
        cout << "Invalid input! Please enter marks between 0 and 100." << endl;
    }

    return 0;
}

