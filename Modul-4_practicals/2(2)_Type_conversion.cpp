//2. Type Conversion
//o Write a C++ program that performs both implicit and explicit type conversions and prints the results.
//o Objective: Practice type casting in C++.

#include<iostream>
using namespace std;

int main()
{
	int a = 5;
	double b = a; // implicit
	
	double x = 9.48;
	int y = int(x); // Explicit
	
	cout << "Implicit Conversion: " << a << " -> " << b << endl;
    cout << "Explicit Conversion: " << x << " -> " << y << endl;
	return 0;
}
