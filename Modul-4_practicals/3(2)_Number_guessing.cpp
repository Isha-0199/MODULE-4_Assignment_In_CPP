//. Number Guessing Game
//o Write a C++ program that asks the user to guess a number between 1 and 100. The program should provide hints if the guess is too high or too low. Use loops to allow the user multiple attempts.
//o Objective: Understand while loops and conditional logic.

#include<iostream>
#include<cstdlib>
#include<ctime>
using namespace std;

int main()
{
    int secretNumber, guess;
    
    // Generate random number between 1 and 100 any number
    srand(time(0));
    secretNumber = rand() % 100 + 1;
    
    cout << "Welcome to Number Guessing Game!" << endl;
    cout << "Guess a number between 1 and 100." << endl;

    // Loop until the user guesses correctly
    while (true)
	{
        cout << "Enter your guess: ";
        cin >> guess;

        if (guess == secretNumber)
		{
            cout << "Congratulations! You guessed the correct number: " << secretNumber << endl;
            break;
        }
        else if (guess > secretNumber)
		{
            cout << "Too high! Try again." << endl;
        }
        else
		{
            cout << "Too low! Try again." << endl;
        }
    }
    return 0;
}

