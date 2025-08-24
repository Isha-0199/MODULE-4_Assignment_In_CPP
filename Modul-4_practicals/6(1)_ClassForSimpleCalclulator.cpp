//1. Class for a Simple Calculator
//o Write a C++ program that defines a class Calculator with functions for addition,
//subtraction, multiplication, and division. Create objects to use these functions.
//o Objective: Introduce basic class structure.

#include <iostream>
using namespace std;

class Calculator {
public:
    // Functions for calculator
    double add(double a, double b)
	{
        return a + b;
    }

    double subtract(double a, double b)
	{
        return a - b;
    }

    double multiply(double a, double b)
	{
        return a * b;
    }

    double divide(double a, double b)
	{
        if (b == 0)
		{
            cout << "Error! Division by zero." << endl;
            return 0;
        }
        return a / b;
    }
};

int main()
{
	
    Calculator calc; //create object 
    double x, y;

    cout << "Enter first number: ";
    cin >> x;
    cout << "Enter second number: ";
    cin >> y;

    cout << "Addition: " << calc.add(x, y) << endl;
    cout << "Subtraction: " << calc.subtract(x, y) << endl;
    cout << "Multiplication: " << calc.multiply(x, y) << endl;
    cout << "Division: " << calc.divide(x, y) << endl;

    return 0;
}

