//Variable Scope
//o Write a program that demonstrates the difference between local and global
//variables in C++. Use functions to show scope.
//o Objective: Reinforce the concept of variable scope.

#include<iostream>
using namespace std;

int x = 90; //globle variable

void show()
{
	cout << "inside function , Globle x = " << x << endl ;
}

int main()
{
	int x = 20; //local variable
	cout << "inside main , Local x = " << x << endl;
	show();
	
	return 0;	
}
