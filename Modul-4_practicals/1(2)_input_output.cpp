//2. Basic Input/Output
//o Write a C++ program that accepts user input for their name and age and then
//displays a personalized greeting.
//o Objective: Practice input/output operations using cin and cout.

#include<iostream>
#include<string.h>
using namespace std;

int main()
{
	string name;
	int age;
	
	cout << "Enter the name : ";
	cin >> name ;
	
	cout << "Enter the age is : " ;
	cin >> age;
	
	cout<< "your name is: "<< name << endl <<"your age is : "<< age;
	return 0; 
}
