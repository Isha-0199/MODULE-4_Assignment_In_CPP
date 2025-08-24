//4.Functions and Scope
//LAB EXERCISES:
//1. Simple Calculator Using Functions
//o Write a C++ program that defines functions for basic arithmetic operations (add,subtract, multiply, divide). 
//The main function should call these based on user input.
//o Objective: Practice defining and using functions in C++.

#include<iostream>
using namespace std;

float add(float a, float b);
float sub(float a, float b);
float mul(float a, float b);
float div(float a, float b);

int main()
{
	float a, b;
	char op;
	
	cout << "Enter first num: ";
	cin >> a;
	cout << "Enter operator (+, -, *, /): ";
	cin >> op;
	cout << "Enter second num: ";
	cin >> b;
	
	switch(op)
	{
		case '+':
			cout << "Result = " << add(a,b) << endl;
			break;
		case '-':
			cout << "Result = " << sub(a,b) << endl;
			break;
		case '*':
			cout << "Result = " << mul(a,b) << endl;
			break;
		case '/':
			cout << "Result = " << div(a,b) << endl;
			break;
	}
	return 0;
}

float add(float a, float b)
{
	return a + b;
}
float sub(float a, float b)
{
	return a - b;
}
float mul(float a, float b)
{
	return a * b;
}
float div(float a, float b)
{
	return a / b;
}
