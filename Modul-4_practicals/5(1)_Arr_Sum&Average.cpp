//1. Array Sum and Average
//o Write a C++ program that accepts an array of integers, calculates the sum and
//average, and displays the results.
//o Objective: Understand basic array manipulation.

#include<iostream>
using namespace std;

int main()
{
	int num,sum=0;
	float average;
	
	cout << "Enter the number of elements in array: ";
	cin >> num;
	
	int arr[num];
	
	cout << "Enter " << num << " integer : " << endl;
	
	for(int i = 0; i < num; i++)
	{
		cin >> arr[i];
		sum +=arr[i];
	}
	
	average = (float)sum/num;
	
	cout << "Sum is: " << sum << endl;
	cout << "Average is: " << average;
}
