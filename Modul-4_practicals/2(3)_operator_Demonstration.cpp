//3. Operator Demonstration
//o Write a C++ program that demonstrates arithmetic, relational, logical, and bitwise operators. Perform operations using each type of operator and display the results.
//o Objective: Reinforce understanding of different types of operators in C++.

#include<iostream>
using namespace std;

int main()
{
	int a, b ;
	
	cout << "Enter first operand : ";
	cin >> a;
	
	cout << "Enter second oprand : ";
	cin >> b;
	
	//arithmatic operators
	
	cout << "\n==Arithmatic operator==\n";
	cout << "a + b = " << a+b << endl;
	cout << "a - b = " << a-b << endl;
	cout << "a * b = " << a*b << endl;
	cout << "a / b = " << a/b << endl;
	
	//relational operator
	
	cout << "\n==relational operator==\n";
	cout << "a == b : " << (a == b) << endl;
	cout << "a < b : " << (a < b) << endl;
	cout << "a > b : " << (a > b) << endl;
	cout << "a != b : " << (a != b) << endl;
	cout << "a >= b : " <<(a >= b) << endl;
	cout << "a <= b : " << (a <= b)<<endl;
	
	cout << "\n==Logical Operator==\n";
	cout<< "(a > 0 && b > 0) : " << (a > 0 && b > 0) << endl;
	cout << "( a > 0 || b < 0 ) : " << (a > 0 || b < 0) << endl;
	cout << "!(a = b) : " << !(a = b) << endl;
	
	//bitwise operator
	
	cout << "\n==Bitwise Operator==\n";
	cout << "a & b :" << (a & b) << endl;
	cout << "a | b : " << (a | b) << endl;
	cout << "a ^ b : " << (a ^ b) << endl;
	cout << "a << 1 : " << (a << 1) << endl;
	cout << "a >> 1 : " << (a >> 1) << endl;
	
	return 0;	
}
