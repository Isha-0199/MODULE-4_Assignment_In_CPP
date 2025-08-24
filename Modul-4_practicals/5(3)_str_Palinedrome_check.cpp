//3. String Palindrome Check
//o Write a C++ program to check if a given string is a palindrome (reads the same
//forwards and backwards).
//o Objective: Practice string operations.

#include<iostream>
using namespace std;

int main()
{
	string str;
	
	cout << "Enter a palinedrome Word: ";
	cin >> str ;
	
	int length = str.length();
	bool palindrome = true;
	
	for(int i = 0; i < length / 2; i++)
	{
		int right = length - i - 1;
		if(str[i] != str[right])
		{
			palindrome = false;
			break;
		}
	}
	
	if(palindrome)
	{
		cout << "The word is a palindrome!!!" << endl;
	}
	else{
		cout << "The word NOT is a palindrome" << endl;
	}
	return 0;
}
